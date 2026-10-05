#include<stdio.h>

#pragma pack(1)
union Demo
{
    int i;
    float f;
    double d;

};
int main()
{
    printf("%d\n",sizeof(union Demo));   // 8 bytes (becouse Union takes largest variable size)  // it show the size of structure without creating object


    return 0;
}
