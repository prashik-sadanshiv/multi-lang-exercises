#include<stdio.h>


union Demo
{
    int i;
    char ch;
};

int main()
{

    union Demo dobj;

    dobj.i = 65;

    printf("%d\n",dobj.i);      // 65
    printf("%c\n",dobj.ch);     // becaouse of the ASCII value output of ch will be "A" :-(65 = A)

    return 0;
}
