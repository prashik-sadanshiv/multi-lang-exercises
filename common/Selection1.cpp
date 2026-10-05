
#include<iostream>
using namespace std;


int main()
{
    int No = 0;
    cout<<"Enter the Number:";
    cin>>No;

    if((No % 2) == 0)
    {
        cout<<"Even Number...\n";
    }
    else
    {
        cout<<"Odd Number...\n";
    }

    return 0;
}