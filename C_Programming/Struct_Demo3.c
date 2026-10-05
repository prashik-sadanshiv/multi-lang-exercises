#include<stdio.h>

// 1 2 4 8      ()
#pragma pack(1)
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