#include <stdio.h>
// pointer//
int main()
{
    int age = 22;
    int *ptr = &age;
    int alu = *ptr;
    printf("%d", alu);

    return 0;
}

#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    // address//
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    return 0;
}

#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    // value at address of//DEREFFERENCE//
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}

#include <stdio.h>
// find output//
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x=%d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;

    printf(" x=%d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf(" x=%d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}

#include <stdio.h>
// pointer to pointer//
int main()
{

    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    return 0;
}

#include <stdio.h>
// pointer to pointer//
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", *ptr);
    printf("%d", **pptr);

    return 0;
}

#include <stdio.h>
// pointer to function call square exp.//
void square(int n);
void _square(int *n);

int main()
{

    int n;
    printf("enter number :");
    scanf("%d", &n);
    square(n);
    printf("numbers :%d\n", n);

    _square(&n);
    printf("numbers :%d\n", n);
    return 0;
}
// call by value//
void square(int n)
{
    n = n * n;
    printf("square is %d\n", n);
}

// call by refference//
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("square is %d\n", *n);
}
/*enter number :4
square is 16
numbers :4
square is 16
numbers :16
PS C:\Users\Udita\Desktop\C_Tutorial>*/

#include <stdio.h>
//***swap two numbers a & b call by value and call by refference//
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("x=%d & y=%d\n", x, y);
    _swap(&x, &y); // & hobe mone rakhis//
    printf("x=%d & y=%d\n", x, y);
    return 0;
}
// call by value//
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a=%d&b=%d\n", a, b);
}

// call by refferrence//
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* x=3 & y=5
   x=5 & y=3   */

#include <stdio.h>
// pointer to function call same or not//
void printAddress(int n);

void _printAddress(int *n);

int main()
{
    int n = 4;
    printAddress(n);
    printf("address of n is :%u\n", &n);

    _printAddress(&n);
    printf("address of n is :%u\n", &n);

    return 0;
}
// call by value//
void printAddress(int n)
{
    printf("address of n is :%u\n", &n);
}

// call by refferrence//
void _printAddress(int *n)
{
    printf("address of n is :%u\n", n);
}

/*address of n is :6422272
address of n is :6422300
address of n is :6422300
address of n is :6422300 */

#include <stdio.h>
// sum prod avg of two number in a function using pointer//
void Dowork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a = 3, b = 5;
    int sum, prod, avg;
    Dowork(a, b, &sum, &prod, &avg);
    printf("the sum is %d\n,the prod is %d\n,the avg. is %d\n", sum, prod, avg);
    return 0;
}
void Dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;  // a,b pass by value//
    *prod = a * b; // sum,prod,avg pass by refference//
    *avg = (a + b) / 2;
}
/*the sum is 8
the prod is 15
the avg. is 4*/

#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;

    // pointer arithmetic of array//

    printf("%d\n", ptr);
    ptr++;
    printf("%d\n", ptr);
    return 0;
}

/*6422296
6422300*/

// pointer arithmetic of array//int//
// substract of 2 pointer//
#include <stdio.h>

int main()
{
    int age1 = 22;
    int age2 = 23;

    int *ptr1 = &age1;
    int *ptr2 = &age2;
    // substract of 2 pointer//
    printf("%u\n", ptr1 - ptr2);

    return 0;
}

// pointer arithmetic of array//float//
// substract of 2 pointer//
#include <stdio.h>

int main()
{
    float age1 = 56.4;
    float age2 = 12.43;

    float *ptr1 = &age1;
    float *ptr2 = &age2;
    // substract of 2 pointer//
    printf("%u\n", ptr1 - ptr2);

    return 0;
}

// pointer arithmetic of array//char//
// substract of 2 pointer//
#include <stdio.h>

int main()
{
    char age1 = '3'; //(ASCII value)//
    char age2 = '4';

    char *ptr1 = &age1;
    char *ptr2 = &age2;
    // substract of 2 pointer//
    printf("%u\n", ptr1 - ptr2);

    return 0;
}
#include <stdio.h>
int main()
{
    int age1 = 22;
    char age2 = 'a';

    int *ptr1 = &age1;
    char *ptr2 = &age2;

    // pointer arithmetic of array//
    // substract of 2 pointer//
    printf("%u\n", ptr1 - ptr2);

    return 0;
} /*generated run time error
because of different data types operation*/

// pointer arithmetic of array//
// comparison of 2 pointer//
#include <stdio.h>

int main()
{
    int age1 = 22;
    int age2 = 23;

    int *ptr1 = &age1;
    int *ptr2 = &age1; // let ptr2 also stores &age1//
    printf("%u\n", ptr1 == ptr2);

    return 0;
}

// arrays is a pointer//
#include <stdio.h>

int main()
{
    int arr[] = {24, 45, 78};

    int *ptr = arr;
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[2];

    printf("%u\n", ptr);
    printf("%u\n", ptr1);
    printf("%u\n", ptr2);

    return 0;
}

// traverse of arrays//
#include <stdio.h>

int main()
{
    int aadhar[5];
    // input//
    int *ptr = &aadhar[0];
    //............aadhar//
    for (int i = 0; i < 5; i++)
    {
        printf("%d index ", i);
        scanf("%d", (ptr + i));
    } //.............&aadhar[i]//

    // output//
    for (int i = 0; i < 5; i++)
    {
        printf("%d index=%d\n ", i, *(ptr + i));
    } //............................. aadhar[i]//
    return 0;
}

// arrays as function argument//
#include <stdio.h>
// function declaration//
void printNumbers(int arr[], int n);

int main()
{

    // function call//
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// what the code give//
#include <stdio.h>

int main()
{
    int countOdd(int arr[], int n);
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };

    printf("%d\n", *(arr + 2));
    printf("%d", *(arr + 5));
    return 0;
}