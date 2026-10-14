#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("Hello.txt", O_RDWR);          // permission for owner, group, public

    if(fd == -1)
    {
        printf("Unable to OPEN the file");
        return EXIT_FAILURE;    // return -1 and return EXIT_FAILURE are same
    }
    else
    {
        printf("File get's OPENED with: %d\n", fd);
    }

    return EXIT_SUCCESS;
}