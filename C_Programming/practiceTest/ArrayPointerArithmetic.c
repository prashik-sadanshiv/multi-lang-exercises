

#include <stdio.h>

int main(){
    int Arr[5] = {10, 20, 30, 40, 50};
    int *ptr = Arr;     

    for(int i = 0; i < 5; i++) {
        printf("Arr[%d] is %d\n", i, *(ptr + i));
    }

    return 0;
}