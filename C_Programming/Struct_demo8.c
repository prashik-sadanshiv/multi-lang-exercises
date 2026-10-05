#include<stdio.h>

#pragma pack(1)
struct Demo
{
    /* data declare */
   int i;
   float f;

};

int main()
{
    struct Demo Arr[3];             // creation of object
    Arr[0].i = 11;
    Arr[0].f = 11.0;

    Arr[1].i = 21;
    Arr[1].f = 21.0;

    Arr[2].i = 51;
    Arr[2].f = 51.0;

    printf("%d\n", sizeof(Arr));   // check the size of struct demo Arr object

    printf("%d\n", Arr[0].i);
    printf("%d\n", Arr[0].f);

    printf("%d\n", Arr[1].i);
    printf("%d\n", Arr[1].f);

    printf("%d\n", Arr[2].i);
    printf("%d\n", Arr[2].f);

    
    return 0;
}