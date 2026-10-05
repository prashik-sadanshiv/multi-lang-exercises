
#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *sPtr = str;

    while(*sPtr != '\0') {
        printf("%c ", *sPtr);
        sPtr++;
        printf("value of *sPtr is %c\n", *sPtr);
    }

    return 0;
}