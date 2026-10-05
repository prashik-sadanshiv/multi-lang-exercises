#include<stdio.h>

#pragma pack(1)
union Demo
{
    int i;
    float f;
};

int main()
{

    // printf("%d\n", sizeof(union Demo));         // expected output will be 4 bytes (beggest variable size will return as output)

    union Demo dobj;

    dobj.f = 11.0;

    printf("%f\n",dobj.f);
    printf("%d\n",dobj.i);
    return 0;
}
