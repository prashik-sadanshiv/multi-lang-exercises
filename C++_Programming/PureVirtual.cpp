#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        int addition(int No1, int No2)          // concrete method/function
        {
            return No1 + No2;
        }

        virtual int substraction(int No1, int No2) = 0;         // Abstract method/function (must redefine the function )

};

class Derived : public Base
{
    public:
        int x;

        // int substraction(int No1, int No2)
};

int main()
{

    Base boj;   // error (cant' create the object of base class)
    Derived dobj;   // error (creating object of derieved class without definig the body of that virtual function)

    return 0;
}