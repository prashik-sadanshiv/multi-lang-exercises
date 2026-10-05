#include<iostream>
using namespace std;
// C++ support's generic programming, that's why they have removed address specifier....

int Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;
    return Result;
}

int main()
{

    int Value1 = 0, Value2 = 0, Result = 0;

    cout<<"Enter First Number:\n";
    cin>>Value1;

    cout<<"Enter Secound Number:\n";
    cin>>Value2;

    Result = Addition(Value1, Value2);

    cout<<"Addition is: "<<Result<<"\n";

    return 0;
}