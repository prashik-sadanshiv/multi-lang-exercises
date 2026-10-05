#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    printf("First element: %d\n", *ptr);
    printf("Second element: %d\n", *(ptr + 1));
    printf("Second Element: %d\n", *(arr+1));
    printf("Second Element: %d\n", arr[1]);
    printf("Second Element: %d\n", 1[arr]);

    return 0;
}