//learn how to use man unlink

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  
#include<fcntl.h>

int main()
{
    int ret = 0;
    ret = unlink("Demo.txt");

    if(ret == -1)
    {
        printf("unable to delete the file \n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("succefully deleted file :%d\n", ret);
    }
   
    return EXIT_SUCCESS;
}