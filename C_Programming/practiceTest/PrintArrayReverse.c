#include <stdio.h>

int main() {
    int Arr[5] = {10, 20, 30, 40, 50};
    int *ptr = Arr + 4;         // point to last element

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr - i));
    }

    return 0;
}