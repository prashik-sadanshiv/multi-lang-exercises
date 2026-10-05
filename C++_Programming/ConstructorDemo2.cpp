#include<iostream>
using namespace std;

class PPA           // class contain two things 1. characteristic(data) and 2. Behaviour(function)
{
    public:
        int No1;
        int No2;

    
    // Parameterised Constructor
    PPA(int a, int b)       // Parameterised Constructor
    {
        cout<<"Inside Default Constructor...\n";
    }
    

    ~PPA()      // Default Destroctor
    {
        cout<<"Inside destructor...\n";
    }
    

};
                    // size of obj of class is equla to sumession of all it's non static charateristics
int main()
{

    PPA pobj1();       // We have to pass the argument to the constructor using this objects
    PPA pobj2(11, 21);


    return 0;
}