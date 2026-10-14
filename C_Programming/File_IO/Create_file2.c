#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = creat("Hello.txt", 0777);          // permission for owner, group, others

    if(fd == -1)
    {
        printf("Unable to create the file");
        return EXIT_FAILURE;    // return -1 and return EXIT_FAILURE are same
    }
    else
    {
        printf("File get's created with: %d\n", fd);
    }

    return EXIT_SUCCESS;
}