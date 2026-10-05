
#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

    Arithematic()
    {
        No1 = 0;
        No2 = 0;
    }

    Arithematic(int i, int j)
    {
        No1 = i;
        No2 = j;
    }
    
    void Addition()
    {
        int Result = 0;
        Result = No1 + No2;
        cout<<"Addition is: "<<Result<<"\n";
    }

    int Substraction()
    {
        int Result = 0;
        Result = No1 - No2;
        return Result;
    }
};


int main()
{
    Arithematic obj1;
    int No1 = 0, No2 = 0, Ans = 0;
    cout<<"Enter first Number: ";
    cin>>No1;

    cout<<"Enter second Number: ";
    cin>>No2;

    obj1.Addition();

    Arithematic obj2(No1, No2);
    obj2.Addition();

    Ans = obj2.Substraction();
    cout<<"Substraction is: "<<Ans<<"\n"; 

    return 0;
}