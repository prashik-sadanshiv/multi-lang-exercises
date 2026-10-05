#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
        static int X;
        Demo(int i, int j)
        {
            cout<<"Inside Constructor....\n";
            No1 = i;
            No2 = j;
        }

    void fun()
    {
        cout<<"Inside fun....\n";
        cout<<No1<<"\n";
        cout<<No2<<"\n";     // NON-STATIC Characteritics
        cout<<X<<"\n";      // STATIC Characteritics
    }
    static void gun()
    {
        cout<<"Inside gun....\n";
        // cout<<No1<<"\n";    //  NON-STATIC Characteristics not able to access in STATIC behaviour (function)
        // cout<<No2<<"\n";     // NON-STATIC Characteristics not able to access
        cout<<X<<"\n";      // STATIC Characteritics
    }
};

int Demo :: X = 11;
int main()
{

    cout<<Demo::X<<"\n";             // STATIC characteristics is accessable using only class name

    Demo::gun();

    Demo obj1(10, 20);
    Demo obj2(30, 40);

    obj1.fun();
    obj2.fun();

    return 0;
}
// Static_Demo25-08-26

