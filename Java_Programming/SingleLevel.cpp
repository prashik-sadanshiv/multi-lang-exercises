#include<iostream>
using namespace std;


class Base
{
    public:
        int i, j;

        Base()
        {
            cout<<"Inside Base class constructor....";
        }

        void fun()
        {
            cout<<"Inside base class fun function";
        }

        void gun()
        {
            cout<<"Inside base class gun function";
        }

        ~Base()
        {
            cout<<"Inside Base class destructor....";
        }
};

class Derived : public Base
{
    public:
        int x, y;

        Derived()
        {
            cout<<"Inside Derived class constructor....";
        }

        void sun()
        {
            cout<<"Inside Derived class gun function";
        }

        ~Derived()
        {
            cout<<"Inside Derived class Destructor...";
        }
};

int main()
{
    
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;
};