#include<stdio.h>

#pragma pack(1)
struct Demo
{
    /* data declare */
    int no;
    float f;
    int *p;         // pointer inside the structure
};

int main()
{
    int x = 11;
    struct Demo dobj;   // 

    dobj.no = 21;
    dobj.f = 90.99;
    dobj.p = &x;        // pointer is pointing to the x variable

    printf("%d\n", *(dobj.p));      // 11 should be the ans  

    return 0;
}