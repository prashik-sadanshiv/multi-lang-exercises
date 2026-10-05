
// #include<stdio.h>

// struct Arithematic
// {
//     int No1;
//     int No2;
    
// };

// int main()
// {
//     struct Arithematic obj1;

//     printf("Enter First Number: ");
//     scanf("%d", &obj1.No1);

//     printf("Enter Second Number: ");
//     scanf("%d", &obj1.No2);
    
//     int Ans = 0;
//     Ans = obj1.No1 + obj1.No2;

//     printf("Addition is: %d\n", Ans);

//     return 0;
// }


#include<stdio.h>

int Addition(int i, int j)
{
    int Result = 0;
    Result = i + j;
    return Result;
}

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter first Number: ");
    scanf("%d", &No1);

    printf("Enter second Number: ");
    scanf("%d", &No2);

    Ans = Addition(No1, No2);

    printf("Addition is %d\n", Ans);
    
    return 0;
}