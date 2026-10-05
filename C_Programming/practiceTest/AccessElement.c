// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr;       // pointer to first element

//     printf("%d\n", arr[0]);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(ptr + 1));

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int Arr[4] = {10, 20, 30, 40};

//     printf("%d\n", Arr);
//     printf("%d\n", &Arr);
//     printf("%d\n", &(Arr[0]));

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int Arr[4] = {10, 20, 30, 40};

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

// #pragma pack(1)
// struct Demo
// {
//     int i;
//     float f;

//     struct Hello
//     {
//         int no;
//         float marks;
//     }hobj, hojb2;
// };

// int main()
// {
//     struct Demo dobj;
//     dobj.i = 11;
//     dobj.f = 98.99f;
//     dobj.hobj.no = 21;
//     dobj.hobj.marks = 99.99f;

//     printf("%d\n", sizeof(dobj));
//     printf("%d\n", dobj.hobj.no);

//     printf("%d\n", dobj.i);
//     printf("%f\n", dobj.f);

// }



// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     /* data declaration */
//     int i;
//     float f;
// };

// int main()
// {
//     struct Demo Arr[3];
//     Arr[0].i = 11;
//     Arr[0].f = 11.0;

//     Arr[1].i = 21;
//     Arr[1].f = 21.0;

//     Arr[2].i = 51;
//     Arr[2].f = 51.0;

//     printf("%d\n", sizeof(Arr));        // check the size of struct demo Arr object

//     printf("%d\n", Arr[0].i);
//     printf("%d\n", Arr[0].f);

//     return 0;
// }


// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     int i;
//     float f;
//     struct Demo *ptr;
// };

// int main()
// {
//     struct Demo dobj;

//     dobj.i = 11;
//     dobj.f = 21.32f; 

//     printf("%d\n", sizeof(dobj));
//     printf("%d\n", &(dobj.i));
//     printf("%d\n", dobj.i);
//     printf("%d\n", dobj.f);
//     printf("%d\n", &(dobj.ptr));
//     printf("%d\n", dobj.ptr);

//     return 0;
// }


// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     /* data declare */
//     int i;
//     float f;
//     double d;
// };

// int main()
// {
//     struct Demo Arr[3];             // creation of object
//     Arr[0].i = 11;
//     Arr[0].f = 11.0;
//     Arr[0].d = 21.344223;

//     Arr[1].i = 21;
//     Arr[1].f = 21.0;

//     Arr[2].i = 51;
//     Arr[2].f = 51.0;

//     printf("%d\n", sizeof(Arr));        // check the size of struct Demo

//     printf("%d\n", Arr[0].i);
//     printf("%f\n", Arr[1].f);
//     printf("%lf\n", Arr[0].d);

//     return 0;
// }


// #include<stdio.h>
// struct Demo
// {
//     /* data declare */
//     int no;
//     int Arr[3];
// };

// int main()
// {
//     struct Demo dobj;
//     printf("%d\n", sizeof(dobj));

//     dobj.no = 10;
//     dobj.Arr[0] = 11;
//     dobj.Arr[1] = 21;
//     dobj.Arr[2] = 31;

//     printf("%d\n", dobj.Arr[1]);            
//     return 0;
// }


// #include<stdio.h>

// #pragma pack(1)
// struct Demo
// {
//     /* data declare */
//     int no;
//     float f;
//     int *p;
// };

// int main()
// {
//     int x = 11;
//     struct Demo dobj;

//     dobj.no = 21;
//     dobj.f = 90.99;
//     dobj.p = &x;

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 51, 101, 111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", p);
//     printf("%d\n", q);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {

//     int arr[] = {11, 21, 51, 101, 111};

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

// int main(){

//     int arr[] = {11,21,51,101,111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", (q-p));
//     printf("%d\n", q-2);
//     printf("%d\n", p+2);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int arr[] = {11, 21, 51, 101, 111};

//     int *q = NULL;
//     int *p = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", *p);     // 21

//     p = p + 3;  // shifting by the 3 size of point

//     printf("%d\n", *p);     // 111

//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int arr[] = {11,21,51,101,111};

//     int *p = NULL;
//     int *q = NULL;

//     p = &(arr[1]);
//     q = &(arr[3]);

//     printf("%d\n", *q);     // 101

//     q = q - 3;  // q = q - 3 sizeof(pointer_type)

//     printf("%d\n", *q);     // 11

//     return 0;
// }




