#include<stdio.h>

int Addition(int No1, int No2)
{
    // local Variable
    int Result = 0;
    Result = No1 + No2;                 // Business logic
    return Result;
}
int main()
{
    // Local Variables 
    int Value1 = 0, Value2 = 0, Ans = 0;

    printf("Enter first Number: \n");
    scanf("%d",&Value1);
    
    printf("Enter Secound Number: \n");
    scanf("%d",&Value2);

    Ans = Addition(Value1, Value2);       // Function Call 
    printf("Addition is : %d\n", Ans);     // Return output of addition Result and print
   
    return 0;
}