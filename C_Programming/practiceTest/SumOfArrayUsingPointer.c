#include <stdio.h>

int main() {
    int Arr[5] = {10, 20, 30, 40, 50};
    
    int *ptr = Arr;
    int total = 0;
    for(int i = 0; i < 5; i++){
        total = total + *(ptr + i);
    }
    printf("Sum of the Array element is: %d\n", total);
    return 0;
}