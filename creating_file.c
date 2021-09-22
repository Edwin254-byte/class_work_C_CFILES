/*create and store information in a text file*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fptr;
    char text[1000];
    char fname[20] = "test.txt";
    printf("\n\nCreate a new file named (test.txt) and input text:\n");
    printf("--------------------------------------------------------------------\n");
    fptr = fopen(fname,"w");
    if(fptr==NULL)
    {
        printf("\nError in opening file!");
        exit(1);
    }
    printf("\nInput a sentence for the file:\n");
    fgets(text, sizeof text, stdin);
    printf("---------------------------------------------------------------\n\n");
    fprintf(fptr,"%s",text);
    fclose(fptr);
    printf("\nFile created successfully......!!\n\n");
    return 0;

}
