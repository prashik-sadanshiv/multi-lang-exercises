#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float Marks;
    }hobj;
};

int main()
{
    struct Demo dobj;

    printf("%d\n", sizeof(dobj));           // 16 bytes because inner structure Hello object is created so 16 bytes is allocated

    dobj.i = 11;
    dobj.f = 3.14;

    dobj.hobj.no = 21;              // inner Hello struct initialization 
    dobj.hobj.Marks = 90.32f;

    return 0;
}
