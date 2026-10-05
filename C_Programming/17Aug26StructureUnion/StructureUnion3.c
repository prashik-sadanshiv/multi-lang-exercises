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
    struct Demo dobj;

    dobj.i = 11;
    dobj.f = 3.14f;
    dobj.d = 9.6789;

    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);          // %f is for float formate specifier
    printf("%lf\n",dobj.d);         // %ls is for double (formate specifier)

    return 0;
}
