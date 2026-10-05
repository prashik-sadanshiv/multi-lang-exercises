#include<iostream>
using namespace std;

class PPA           // class contain two things 1. characteristic(data) and 2. Behaviour(function)
{
    public:
        int No1;
        int No2;

    PPA()
    {
        cout<<"Inside Defualt constructor...\n";
    }
    
    // Parameterised Constructor

    PPA(int a, int b)       // Parameterised Constructor
    {
        cout<<"Inside Parameterised Constructor...\n";
    }
    
    // copy constructor.
    PPA(PPA &obj)
    {
        cout<<"Inside copy constructor...\n";
    }

    ~PPA()      // Default Destroctor
    {
        cout<<"Inside destructor...\n";
    }
    

};
                    // size of obj of class is equla to sumession of all it's non static charateristics
int main()
{

    PPA pobj1;       // Default
    PPA pobj2(11, 21);  // parameterised
    PPA pobj3(pobj1);   // Copy constructor


    return 0;
}