

#include<stdio.h>

int main()
{
    int Age = 0;

    printf("Enter Your Age: ");
    scanf("%d", &Age);

    if(Age <=17)
    {
        printf("Not Allowed..\n");
    }
    else
    {
        printf("Allowd..\n");
    }
    return 0;
}