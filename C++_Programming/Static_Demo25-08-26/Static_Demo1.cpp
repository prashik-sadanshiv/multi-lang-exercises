#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
        static int X;
    
    void fun()
    {
        cout<<"Inside fun....\n";
        cout<<No1<<"\n";
        cout<<No2<<"\n";     // NON-STATIC Characteritics
        cout<<X<<"\n";      // STATIC Characteritics
    }
    static void fun()
    {
        cout<<"Inside gun....\n";
        // cout<<No1<<"\n";    //  NON-STATIC Characteristics not able to access in STATIC behaviour (function)
        // cout<<No2<<"\n";     // NON-STATIC Characteristics not able to access
        cout<<X<<"\n";      // STATIC Characteritics
    }
};

int main()
{

    cout<<Demo::X<<"\n";             // STATIC characteristics is accessable using only class name
    Demo obj1;
    Demo obj2;

    cout<<obj1.No1<<"\n";

    return 0;
}
// Static_Demo25-08-26

