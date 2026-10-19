

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("data.txt", "W");

    if (fp == -1){
        perror("File creation failed");

        return EXIT_FAILURE;
    }
    else
    { 
        printf("File Created successfully. %d\n", fp);
        fclose(fp);
    }

    return EXIT_SUCCESS;
}