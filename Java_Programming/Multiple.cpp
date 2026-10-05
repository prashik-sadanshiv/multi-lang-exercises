

#include<iostream>
using namespace std;

class BaseA
{
    public: 
        int i, j;

        BaseA()
        {
            cout<<"Inside BaseA class Constructor...."<<"\n";
        }

        ~BaseA()
        {
            cout<<"Inside BaseA class Destructor...."<<"\n";
        }

        void fun()
        {
            cout<<"Inside Base class fun function/Method..."<<"\n";
        }
};

class BaseB
{
    public:
        int x, y;

        BaseB()
        {
            cout<<"Inside BaseB class Constructor...."<<"\n";
        }
        ~BaseB()
        {
            cout<<"Inside BaseB class Destructor...."<<"\n";
        }
        void gun()
        {
            cout<<"Inside BaseB class gun function/Method..."<<"\n";
        }
};

class Derived : public BaseB, BaseA
{
    public:
        int a;

        Derived()
        {
            cout<<"Inside Derived class Constructor...."<<"\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived class Destructor...."<<"\n";
        }
        void sun()
        {
            cout<<"Inside Derived class sun function/Methode"<<"\n";
        }
};

int main()
{

    cout<<sizeof(BaseA)<<"\n";
    cout<<sizeof(BaseB)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    // Derived dobj;

    return 0;
};