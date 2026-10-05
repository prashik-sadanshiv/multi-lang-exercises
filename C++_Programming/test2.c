// #include<stdio.h>

// int main()
// {

//     printf("Hello World....\n");
//     return 0;
// }



#include<stdio.h>

struct Demo
{
    int No1;
    int No2;
};

int main()
{
    struct Demo pobj;

    pobj.No1 = 11;
    pobj.No2 = 12;

    printf("%d\n", pobj.No1);
    printf("%d\n", pobj.No2);

    return 0;
}