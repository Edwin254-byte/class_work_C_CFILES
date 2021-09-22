/* reading an existing file*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fptr;
    char fname[20];
    char text;
    printf("\nReading an existing file:\n");
    printf("------------------------------------------------------\n");
    printf("\nInput file name to open:\t");
    scanf("%s",fname);
    fptr = fopen(fname,"r");

    if (fptr==NULL)
    {
        printf("\nFILE DOES NOT EXIST OR CANNOT BE OPENED!!!\n");
        exit(1);
    }
    printf("\nThe content of the file %s is :\n\n",fname);
    text = fgetc(fptr);
    while (text != EOF)
    {
        printf("%c",text);
        text = fgetc(fptr);
    }
    printf("\n------END OF FILE--------");
    return 0;
}
