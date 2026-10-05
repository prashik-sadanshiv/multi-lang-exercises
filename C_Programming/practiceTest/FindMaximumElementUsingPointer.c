#include<stdio.h>

int main(){
    int Arr[5] = {4, 6, 2, 8, 5};
    int *ptr = Arr;

    int max_element = *ptr;
    for(int i = 0; i < 5; i++) {
        if (*(ptr + i) > max_element)
            max_element = *(ptr + i);
    }
    
    printf("Maximum element is : %d\n", max_element);
    
    return 0;
}