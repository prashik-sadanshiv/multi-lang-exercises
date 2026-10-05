#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%d\n", Arr);        // 100      // Address of first element(Base address)
    printf("%d\n", &Arr);       // 100      // Address of whole Array 
    
    printf("%d\n", Arr+1);      // 104
    printf("%d\n", (&Arr)+1);   // 116

    return 0;
}