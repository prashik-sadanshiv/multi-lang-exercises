#include<stdio.h>

#pragma pack(1)
struct Demo
{
    /* data declare */
    int i = 11;         // Error
    char ch = 'A';
    float f = 90.99f;
    
};

int main()
{
    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo *dp = NULL;

    // dp = &dobj2;

    // // for Direct accessing operator we are using "."
    // dobj1.i = 11;
    // dobj1.ch = 'A';
    // dobj1.f = 90.99f;

    // // For Indirect accessing operator we are using "->"
    // dp->i = 51;
    // dp->ch = 'B';
    // dp->f = 91.99;

    // printf("%d\n", dobj1.i);
    // printf("%c\n", dobj1.ch);
    // printf("%f\n", dobj1.f);

    // printf("%d\n", dp->i);
    // printf("%c\n", dp->ch);
    // printf("%f\n", dp->f);

    return 0;
}