#include<iostream>
using namespace std;

class PPA           // class contain two things 1. characteristic(data) and 2. Behaviour(function)
{
    public:
        int No1;
        int No2;

    
      // Default Constructor
    PPA()       // Default Constructor
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

    PPA pobj;
    PPA pobj1;


    return 0;
}