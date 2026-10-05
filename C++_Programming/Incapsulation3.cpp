#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        char ch;
        float f;
};

int main()
{
    Demo dobj;

    dobj.i = 11;            // Error becouse of the private data trying to access from Demo class
    dobj.ch = 'A';
    dobj.f = 3.14;


    return 0;
}