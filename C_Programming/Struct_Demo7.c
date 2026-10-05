#include<stdio.h>

#pragma pack(1)
struct Demo
{
    /* data declare */
    int no;
    int Arr[3];
};

int main()
{
    struct Demo dobj;           // creation object of Struct Demo
    printf("%d\n", sizeof(dobj));   // sizeof(dobj) == 16 bytes

    dobj.no = 10;           // initialization of struct elements
    dobj.Arr[0] = 11;
    dobj.Arr[1] = 21;
    dobj.Arr[2] = 51;

    printf("%d\n", dobj.Arr[1]);            // Ans should be 21
    return 0;
}