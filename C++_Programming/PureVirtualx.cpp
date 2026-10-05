
// Note:- We can't create the object of Base class if any single Pure Virtual function is define in that class

#include<iostream>
using namespace std;

#pragma pack(1)     // use #pragma pack(1) is use to avoid the padding.. and will show exact size of the class 
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

#pragma pack(1)     // use #pragma pack(1) is use to avoid the padding.. and will show exact size of the class
class Derived : public Base
{
    public:
        int x;

        int substraction(int No1, int No2)          // (defining the body of virtual function from the base class)
        {
            return No1 - No2;
        }

         int mulitiplication(int No1, int No2)          // (defining the new function within derived class, it's not mandatory due to Base class)
        {
            return No1 * No2;
        }
};

int main()
{

    Derived dobj;           // now we can create the object of derived because the body is define of Base class Virtual function inside
                            // the derived class... 
    int Ret = 0;

    cout<<"Size of Base is: "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived is: "<<sizeof(Derived)<<"\n";

    Ret = dobj.addition(11, 10);
    cout<<"Addition is:" <<Ret<<"\n";

    Ret = dobj.substraction(11, 10);
    cout<<"Substraction is:" <<Ret<<"\n";

    Ret = dobj.mulitiplication(11, 10);
    cout<<"Multiplication is:" <<Ret<<"\n";


    return 0;
}