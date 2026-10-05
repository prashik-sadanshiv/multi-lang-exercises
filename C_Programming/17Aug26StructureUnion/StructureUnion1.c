#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    double d;

};
int main()
{
    printf("%d\n",sizeof(struct Demo));     // it show the size of structure without creating object


    return 0;
}
