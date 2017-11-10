#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

int main()
{

    char savePath[1001];
    char message[1001];
    FILE * fp;
    //Asks user for path to save the file.
    printf("File name:\n");
    gets(savePath);
    printf("What do you want to type? : \n");
    fgets(message, 1001, stdin);

    fp = fopen(savePath, "w+");
    if (fp == NULL)
    {
        printf("Failed to write to the file.");
    }
    for ( ;;)
    {
       fprintf(fp, "%s\n", message);
       printf("File Written!");
    }





    fclose(fp);

    return 0;
}
