
#include<iostream>
using namespace std;

int main()
{
    int Age = 0;
    cout<<"Enter your Age:";
    cin>>Age;

    if (Age >= 18)
    {
        cout<<"Eligible...\n";
    }
    else
    {
        cout<<"Not Allowed...\n";
    }
    
    return 0;
}