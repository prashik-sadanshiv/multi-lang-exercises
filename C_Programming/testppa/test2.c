// #include<stdio.h>

// int main()
// {
//     printf("Hello World....\n");
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int no = 20;

//     printf("%d\n", no);
//     printf("%d\n", &no);
//     printf("%d\n", sizeof(no));

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[0] = {10, 20, 30, 40};

//     printf("%d\n", Arr);        // Base address of Arr
//     printf("%d\n", &Arr);       // Address of Arr
//     printf("%d\n", &(Arr[0]));  // Address of the first element of Arr

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int Arr[] = {10, 20, 30, 40};

//     printf("%d\n", Arr);    // Base address of Arr
//     printf("%d\n", &Arr);   // Address of whole Arr

//     printf("%d\n", Arr+1);  // Address of second element due to pointer Arithmatic increment operator
//     printf("%d\n", (&Arr)+1);   // address of next to last element of array 

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

//     printf("%d\n", Arr[4]);     // 0
//     printf("%d\n", Arr[1]);     // 20

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
//     printf("Addition is %d\n", ans);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     float v1 = 10.5f;        // local Variable
//     float v2 = 20.7f;        
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
//     printf("Enter First Number: ");
//     scanf("%d", &v1);

//     printf("Enter Second Number: ");
//     scanf("%d", &v2);

//     Ans = v1 + v2;
//     printf("Addition is: %d\n", Ans);

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
//     printf("Enter First Number: ");
//     scanf("%d", &v1);

//     printf("Enter Second Number: ");
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
//     printf("Enter First Number: ");
//     scanf("%d", &v1);

//     printf("Enter Second Number: ");
//     scanf("%d", &v2);

//     Ans = Addition(v1, v2);
//     printf("Addition is: %d\n", Ans);

//     return 0;
// }



// #include<stdio.h>

// int Addition(int No1, int No2)
// {
//     int Result = 0;
//     Result = No1 + No2;
//     return Result;
// }

// int Substraction(int No1, int No2)
// {
//     int Result = 0;
//     Result = No1 - No2;
//     return Result;
// }

// int main()
// {
//     int v1 = 70, v2 = 43, Ans = 0;
//     Ans = Addition(v1, v2);
//     printf("Addition is: %d\n", Ans);

//     Ans = Substraction(v1, v2);
//     printf("Substraction is: %d\n", Ans);

//     return 0;
// }



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


// #include<stdio.h>

// int main()
// {
//     printf("%d\n", sizeof(3.14));
//     printf("%f\n", sizeof(3.14));

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     char ch = 'A';
//     int no = 11;
//     float marks = 90.98f;
//     double d = 90.56789;

//     char *cp = &ch;
//     int *ip = &no;
//     float *fp = &marks;
//     double *dp = &d;

//     printf("%c\n", *cp);
//     printf("%d\n", *ip);
//     printf("%f\n", *fp);
//     printf("%lf\n", *dp);

//     printf("%d\n", sizeof(cp));
//     printf("%d\n", sizeof(cp));
//     printf("%d\n", sizeof(cp));
//     printf("%d\n", sizeof(cp));

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int Arr[] = {10, 20, 30, 40, 50};

//     printf("%d\n", Arr[2]);              // 30
//     printf("%d\n", *(Arr +  2));         // 30
//     printf("%d\n", *(2 + Arr));          // 30
//     printf("%d\n", 2[Arr]);              // 30
//     printf("%d\n", (Arr + 2));
//     printf("%d\n", Arr);

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[2]);
//     q = &(arr[1]);

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     return 0;
// }




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

//     p++;
//     q--;

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     return 0;   
// }



// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 41, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[2]);
//     q = &(arr[4]);

//     printf("%d\n", (q-2));
//     printf("%d\n", (p+2));
//     printf("%d\n", (q-p));


//     return 0;
// }




// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 41, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[2]);

//     printf("%d\n", *p);

//     printf("%d\n", p);
//     printf("%d\n", q);

//     p = p + 3;

//     printf("%d\n", *p);
//     printf("%d\n", *q);

//     return 0;
// }




// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 51, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[4]);

//     printf("%d\n", *q);

//     q = q - 2;

//     printf("%d\n", *q);

//     return 0;
// }




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



// #include<stdio.h>

// #pragma pack(1)
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

//     // for Direct accessing operator we are using "."
//     dobj1.i = 11;
//     dobj1.ch = 'A';
//     dobj1.f = 23.3445f;

//     // For Indirect accessing operator we are using "->"
//     dp->i = 11;
//     dp->ch = 'B';
//     dp->f = 55.5423f;

//     printf("%d\n", dobj1.i);
//     printf("%c\n", dobj1.ch);
//     printf("%f\n", dobj1.f);

//     printf("%d\n", dobj2.i);
//     printf("%c\n", dobj2.ch);
//     printf("%f\n", dobj2.f);
    
//     return 0;
// }



// #include<stdio.h>

// struct Demo
// {
//     // data declaration
//     int i = 11;     // Error
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




// #include<stdio.h>

// struct Demo
// {
//     // data declaration
//     int i;
//     char ch;
//     int *p;
// };

// int main()
// {
//     int x = 11;
//     struct Demo dobj;

//     dobj.i = 11;
//     dobj.ch = 'A';
//     dobj.p = &x;

//     printf("%d\n", *(dobj.p));

//     return 0;
// }



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
//     dobj.Arr[1] = 21;
//     dobj.Arr[2] =  31;
//     dobj.Arr[0] = 11;

//     printf("%d\n", dobj.no);
//     printf("%d\n", dobj.Arr[1]);

//     return 0;
// }



#include<stdio.h>

struct Demo
{
    // data declaration
    int no;
    int Arr[3];
};

int main()
{
    struct Demo dobj;

    printf("%d\n", sizeof(dobj));

    dobj.no = 11;
    dobj.Arr[0] = 21;
    dobj.Arr[1] = 31;
    dobj.Arr[2] = 51;

    printf("%d\n", dobj.no);
    printf("%d\n", dobj.Arr[0]);
    printf("%d\n", dobj.Arr[1]);
    printf("%d\n", dobj.Arr[2]);
    
    return 0;
}
