
#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter the Number: ");
    scanf("%d", &No);

    if ((No % 2) == 0)
    {
        printf("Even Number...\n");
    }
    else
    {
        printf("Odd Number...\n");
    }

    return 0;
}