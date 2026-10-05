#include<iostream>
using namespace std;
// C++ support's generic programming, that's why they have removed address specifier....

struct Arithematic
{
    int No1;
    int No2;
};

int main()
{

    Arithematic aobj1;
    Arithematic aobj2;

    aobj1.No1 = 0;
    aobj1.No2 = 0;

    aobj2.No1 = 10;
    aobj2.No2 = 11;


    return 0;
}