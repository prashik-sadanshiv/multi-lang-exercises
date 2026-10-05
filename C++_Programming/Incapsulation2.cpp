#include<iostream>

using namespace std;

#pragma pack(1)         // to avoid the padding (without padding)
class Demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";

    return 0;
}