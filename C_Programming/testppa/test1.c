// #include<stdio.h>

// int main()
// {
//     printf("Hiiii.\n");

//     return 0;
// }


// #include<stdio.h> h

// int main()
// {
//     int no = 21;

//     printf("%d\n",no);
//     printf("%d\n", sizeof(no));
//     printf("%d\n", &no);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int Arr[4] = {10,20,30,40};

//     printf("%d\n", Arr);
//     printf("%d\n", &Arr);
//     printf("%d\n", &(Arr[0]));

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[] = {10,20,30,40};

//     printf("%d\n", Arr);
//     printf("%d\n", &Arr);

//     printf("%d\n", Arr+1);
//     printf("%d\n", (&Arr)+1);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[4] = {10, 20, 30, 40};

//     printf("%d\n", sizeof(Arr));
//     printf("%d\n", sizeof(Arr[2]));
//     printf("%d\n", Arr[2]);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[5] = {10, 20, 30};

//     printf("%d\n", Arr[4]);
//     printf("%d\n", Arr[1]);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[4];

//     Arr[3] = 40;
//     Arr[2] = 30;
//     Arr[0] = 10;
//     Arr[1] = 20;

//     printf("%d\n", Arr[0]);
//     printf("%d\n", Arr[3]);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int v1 = 10;
//     int v2 = 20;
//     int ans = 0;

//     ans = v1 + v2;
//     printf("Addition is: %d\n", ans);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     float v1 = 10.5f;
//     float v2 = 11.2f;
//     float Ans = 0.0f;

//     Ans = v1 + v2;
//     printf("Addition is :%f\n", Ans);

//     return 0;
// }


// #include<stdio.h>

// // global variable 
// int v1 = 10;
// int v2 = 20;
// int Ans = 0;

// int main()
// {
//     Ans = v1 + v2;
//     printf("Addition is: %d\n", Ans);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int v1 = 0, v2 = 0, Ans = 0;
//     printf("Enter first Number: \n");
//     scanf("%d", &v1);

//     printf("Enter second Number: \n");
//     scanf("%d", &v2);

//     Ans = v1 + v2;
//     printf("Addition is :%d\n", Ans);

//     return 0;
// }


// #include<stdio.h>

// void Addition(int No1, int No2)
// {
//     // local Variable
//     int Result = 0;
//     Result = No1 + No2;
//     printf("Addition is: %d\n", Result);

// }
// int main()
// {
//     int v1 = 0, v2 = 0;
//     printf("Enter first Number: \n");
//     scanf("%d", &v1);

//     printf("Enter second Number: \n");
//     scanf("%d", &v2);

//     Addition(v1, v2);

//     return 0;
// }


// #include<stdio.h>

// int Addition(int No1, int No2)
// {
//     int Result = 0;
//     Result = No1 + No2;
//     return Result;
// }

// int main()
// {
//     int v1 = 0, v2 = 0, Ans = 0;
//     printf("Enter First Number: \n");
//     scanf("%d", &v1);

//     printf("Enter Second Number: \n");
//     scanf("%d", &v2);

//     Ans = Addition(v1, v2);
//     printf("Addition is: %d\n", Ans);

//     return 0;
// }


// Function.c
// #include<stdio.h>

// int Substraction(int No1, int No2)
// {
//     int Result = 0;
//     Result = No1 - No2;
//     return Result;
// }

// int Addition(int No1, int No2)
// {
//     int Result = 0;
//     Result = No1 + No2;
//     return Result;
// }

// int main()
// {
//     int v1 = 42, v2 = 33, Ans = 0;
//     Ans = Addition(v1, v2);
//     printf("Addition is: %d\n", Ans);
//     Ans = Substraction(v1, v2);
//     printf("Substraction is : %d\n", Ans);

//     return 0;
// }

// Modifier.c //
// #include<stdio.h>

// int main()
// {
//     int i = 11;
//     short int j = 11;
//     long int k = 11;

//     printf("%d\n", sizeof(i));
//     printf("%d\n", sizeof(j));
//     printf("%d\n", sizeof(k));

//     return 0;
// }


// pointerDemo1.c //

// #include<stdio.h>

// int main()
// {
//     int i = 20;

//     int *iptr = NULL;
//     iptr = &i;

//     printf("%d\n", *iptr);
//     printf("%d\n", iptr);

//     return 0;
// }



// pointerDemo2.c //

// #include<stdio.h>

// int main()
// {
//     printf("%d\n", sizeof(3.14));
//     printf("%f\n", sizeof(3.14));

//     return 0;
// }



// // pointerDemo3.c //
// #include<stdio.h>

// int main()
// {
//     char ch = 'A';
//     int no = 11;
//     float marks = 90.78f;
//     double d = 90.56789;

//     char *cp = &ch;
//     int *ip = &no;
//     float *fp = &marks;
//     double *dp = &d;

//     printf("%d\n", sizeof(cp));
//     printf("%d\n", sizeof(*cp));
//     printf("%d\n", sizeof(ch));

//     return 0;
// }



// // pointerDemo4.c //
// #include<stdio.h>

// int main()
// {
//     char ch = 'A';
//     int no = 11;
//     float marks = 75.45;
//     double d = 99.999494;

//     char *cp = &ch;
//     int *ip = &no;
//     float *fp = &marks;
//     double *dp = &d;

//     printf("%c\n", *cp);
//     printf("%d\n", *ip);
//     printf("%f\n", *fp);
//     printf("%lf\n", *dp);

//     return 0;
// }


// // pointerArray.c //
// #include<stdio.h>

// int main()
// {
//     int Arr[] = {10, 20, 30, 40, 50};

//     printf("%d\n", Arr[2]);
//     printf("%d\n", *(Arr + 2));
//     printf("%d\n", *(2 + Arr));
//     printf("%d\n", 2[Arr]);

//     return 0;
// }



// // PointerArithmatic1.c //

// #include<stdio.h>

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     return 0;
// }


// // pointerArithmatic2.c //
// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 41, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     p++;
//     q--;

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     return 0;
// }



// pointerArithmatic3.c //
// #include<stdio.h>

// int main()
// {
    
//     int arr[] = {11, 21, 41, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", (q-p));
//     printf("%d\n", (p+2));
//     printf("%d\n", (q-2));

//     return 0;
// }


// pointerArithmatic4.c //
// #include<stdio.h>

// int main()

// {
//     int arr[] = {11, 21, 41, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[2]);

//     printf("%d\n", *p);

//     p = p + 3;

//     printf("%d\n", *q);

//     return 0;
// }



// pointerArithmatic5.c //
// #include<stdio.h>

// int main()
// {
//     int arr[] = {11,21,51,101,111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", *q);

//     q = q - 2;

//     printf("%d\n", *q);

//     return 0;
// }



// // struct_Demo1.c

// #include<stdio.h>

// struct Demo
// {
//     int i;
//     float f;
//     double d;
// };

// int main()
// {
//     printf("%d\n", sizeof(struct Demo));

//     return 0;
// }



// // struct_demo2.c

// #include<stdio.h>
// struct Demo

// {
//     int i;
//     char ch;
//     float f;
// };

// int main()
// {
//     printf("%d\n", sizeof(struct Demo));

//     return 0;
// }


// // Struct_demo3.c
// #include<stdio.h>

// // 1 2 4 8
// #pragma pack(1)
// struct Demo
// {
//     //
//     int i;
//     char ch;
//     float f;
// };

// int main()
// {
//     printf("%d\n", sizeof(struct Demo));

//     return 0;
// }



// // Struct_Demo4.c

// #include<stdio.h>

// struct Demo
// {
//     // data declaration
//     int i;
//     char ch;
//     float f;
// };

// int main()
// {
//     struct Demo dobj1;
//     struct Demo dobj2;

//     struct Demo *dp = NULL;

//     dp = &dobj2;

//     // For Direct accessing operator we are using "."
//     dobj1.i = 11;
//     dobj1.ch = 'A';
//     dobj1.f = 23.345f;

//     // For Indirect accessing operator we are using "->"
//     dp->i = 11;
//     dp->ch = 'B';
//     dp->f = 23.44f;

//     printf("%d\n", dobj1.i);
//     printf("%c\n", dobj1.ch);
//     printf("%f\n", dobj1.f);

//     printf("%d\n", dobj2.i);
//     printf("%c\n", dobj2.ch);
//     printf("%f\n", dobj2.f);

//     return 0;
// }



// // Struct_Demo5.c
// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     // data declare
//     int i = 11;          // Error
//     char ch = 'A';
//     float f = 90f;
// };

// int main()
// {
//     struct Demo dobj1;
//     struct Demo dobj2;

//     struct Demo *dp = NULL;

//     dp = &dobj2;

//     return 0;
// }



// // Struct_Demo6.c
// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     // data declaration
//     int no;
//     char ch;
//     int *p;
// };

// int main()
// {
//     int x = 11;
//     struct Demo dobj;

//     dobj.no = 21;
//     dobj.ch = 'A';
//     dobj.p = &(x);

//     printf("%d\n", *(dobj.p));

//     return 0;
// }



// Struct_Demo7.c
// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     // data declaration
//     int no;
//     int Arr[3];
// };

// int main()
// {

//     struct Demo dobj;

//     printf("%d\n", sizeof(dobj));

//     dobj.no = 11;
//     dobj.Arr[0] = 21;
//     dobj.Arr[1] = 31;
//     dobj.Arr[2] = 51;

//     printf("%d\n", dobj.no);
//     printf("%d\n", dobj.Arr[1]);
//     // printf("%d\n", dobj.Arr);

//     return 0;
// }


// Struct_demo8.c
#include<stdio.h>

#pragma pack(1)
struct Demo
{
    // data declare
    int i;
    float f;
};

int main()
{
    struct Demo Arr[3];
    Arr[0].i = 11;
    Arr[0].f = 34.34f;

    printf("%d\n", sizeof(Arr));

    return 0;
}