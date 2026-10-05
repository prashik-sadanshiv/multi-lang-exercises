#include<stdio.h>
struct Demo
{
    /* data declare */
    int i;
    float f;
    double d;
    
};

int main()
{

    printf("%d\n", sizeof(struct Demo));
    
    return 0;
}