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
            No1 = i;
            No2 = j;
        }
       
};

int Demo :: X = 11;

int main()
{
    Demo obj1(10, 20);
    Demo obj2(30, 40);

    cout<<obj1.No1<<"\n";

    return 0;
}
// Static_Demo25-08-26

