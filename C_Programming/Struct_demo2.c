#include<stdio.h>
struct Demo
{
    /* data declare */
    int i;
    char ch;
    float f;
    
};

int main()
{

    printf("%d\n", sizeof(struct Demo));

    return 0;
}