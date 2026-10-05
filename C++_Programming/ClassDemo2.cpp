#include<iostream>
using namespace std;

class PPA           // class contain two things 1. characteristic(data) and 2. Behaviour(function)
{
    public:
        int No1;
        int No2;

    void Display()
    {
        cout<<"Inside Display....\n";
    }
};
                    // size of obj of class is equla to sumession of all it's non static charateristics
int main()
{

    PPA pobj;

    pobj.No1 = 11;      // Initialize the characteristics means (data) of class PPA 
    pobj.No2 = 21;       // Initialize the characteristics of class PPA

    pobj.Display();     // function calling 

    cout<<pobj.No1<<"\n";
    cout<<pobj.No2<<"\n";

    return 0;
}