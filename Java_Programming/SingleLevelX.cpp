#include<iostream>
using namespace std;


class Base
{
    public:
        int i, j;

        Base()
        {
            cout<<"Inside Base class constructor...."<<"\n";
        }

        void fun()
        {
            cout<<"Inside base class fun function"<<"\n";
        }

        void gun()
        {
            cout<<"Inside base class gun function"<<"\n";
        }

        ~Base()
        {
            cout<<"Inside Base class destructor...."<<"\n";
        }
};

class Derived : public Base
{
    public:
        int x, y;

        Derived()
        {
            cout<<"Inside Derived class constructor...."<<"\n";
        }

        void sun()
        {
            cout<<"Inside Derived class gun function"<<"\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived class Destructor..."<<"\n";
        }
};

int main()
{
    Derived dobj;           // life time and scope resolution
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
};