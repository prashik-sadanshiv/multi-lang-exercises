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
    };
};

int main()
{
    struct Demo dobj;

    printf("%d\n", sizeof(dobj));           // 8 bytes because inner structure Hello not yet have object create

    return 0;
}
