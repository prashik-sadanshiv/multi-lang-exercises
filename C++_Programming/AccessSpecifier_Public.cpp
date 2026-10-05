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

    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;

    cout<<sizeof(dobj.i)<<"\n";
    cout<<sizeof(dobj.ch)<<"\n";
    cout<<sizeof(dobj.f)<<"\n";


    cout<<sizeof(dobj.i)<<"\n";
    cout<<sizeof(dobj.ch)<<"\n";
    cout<<sizeof(dobj.f)<<"\n";

    return 0;
}