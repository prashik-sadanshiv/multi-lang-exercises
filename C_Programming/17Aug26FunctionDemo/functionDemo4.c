#include<stdio.h>



int main()
{
    int Value1 = 0, Value2 = 0, Ans = 0;
    printf("Enter first Number: \n");
    scanf("%d", &Value1);
    printf("Enter Secound Number: \n");
    scanf("%d", &Value2);

    Ans = Value1 + Value2;      // Bussiness Logic 
    printf("Addition is : %d\n", Ans);
    return 0;
}