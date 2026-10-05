
#include<iostream>
using namespace std;

int main()
{
    int Age = 0;
    printf("Enter your Age:");
    scanf("%d", &Age);

    if(Age < 18)
    {
        printf("Not Allowed.... \n");
    }
    else
    {
        printf("Allowed.... \n");
    }
    return 0;
}