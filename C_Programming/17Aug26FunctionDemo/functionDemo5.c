#include<stdio.h>

void Addition(int No1, int No2)
{
    // local Variable
    int Result = 0;
    Result = No1 + No2;                 // Business logic
    printf("Addition is : %d\n", Result);
}

int main()
{
    // Local Variables 
    int Value1 = 0, Value2 = 0;

    printf("Enter first Number: \n");
    scanf("%d",&Value1);
    printf("Enter Secound Number: \n");
    scanf("%d",&Value2);

    Addition(Value1, Value2);       // Function Call 

    return 0;
}