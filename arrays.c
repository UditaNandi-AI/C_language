#include <stdio.h>
// arrays//
int main()
{
    int marks1 = 97;
    int marks2 = 98;
    int marks3 = 89;

    int marks[] = {97, 98, 89};
    return 0;
}

#include <stdio.h>
// input & output of arrays//
int main()
{
    int marks[3];
    printf("enter phy :");
    scanf("%d", &marks[0]);

    printf("enter chem :");
    scanf("%d", &marks[1]);

    printf("enter math:");
    scanf("%d", &marks[2]);

    printf("phy is %d, ,chem is %d,math is %d", marks[0], marks[1], marks[2]);
}

#include <stdio.h>
// final cost with gst arrays//
int main()
{
    float price[3];
    printf("enter 3 prices:");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1:%f\n", price[0] + (0.18 * price[0]));
    printf("total price 1:%f\n", price[1] + (0.18 * price[1]));
    printf("total price 1:%f\n", price[2] + (0.18 * price[2]));
    return 0;
}

// pointer to arrays//
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

#include <stdio.h>

int main()
{
    int age1 = 22;
    int age2 = 23;

    int *ptr1 = &age1;
    int *ptr2 = &age2;

    // pointer arithmetic of array//
    // substract of 2 pointer//
    printf("%d\n", ptr1 - ptr2);

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
    int *ptr = &aadhar[0]; // or  aadhar//
    for (int i = 0; i < 5; i++)
    {
        printf("%d index ", i);
        scanf("%d", (ptr + i));
    } //&aadhar[i]//

    // output//
    for (int i = 0; i < 5; i++)
    {
        printf("%d index=%d\n ", i, *(ptr + i));
    } // aadhar[i]//
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
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// multidimentional arrays//
#include <stdio.h>

int main()
{
    int marks[2][3] = {{90, 76, 54}, {98, 57, 56}};
    printf("%d", marks[0][2]);
    return 0;
}

// count the number of odd number in an arrays//
#include <stdio.h>
int countOdd(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int count = countOdd(arr, 6);
    printf("odd element are :");
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d", arr[i]);
        }
    }
    printf("\nThe total odd number %d\n", count);
    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
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

// reverse the arrays//
#include <stdio.h>
void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5); // function call//
    printArr(arr, 5);
    return 0;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];

        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}

// store the first n fibonacci numbers//
#include <stdio.h>

int main()
{
    int n;
    printf("enter n (n>2)");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d", fib[i]);
    }
    return 0;
}

// create a 2D arrays tables of 2 & 3//
#include <stdio.h>
void storeTable(int arr[][10], int n, int m, int number);
int main()
{
    int tables[2][10];

    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\n", tables[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\n", tables[1][i]);
    }

    return 0;
}
void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}