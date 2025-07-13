// print hello world 5 times//
#include <stdio.h>
void printhello(int n);

int main()
{

    int n;
    printf("enter number:");
    scanf("%d", &n);
    printhello(n);
    return 0;
}

// recursive function//
void printhello(int n)
{

    if (n == 0)
    {
        return;
    }
    printf("Hello World");
    printhello(n - 1);
}

// sum using recursion//
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);
    int result = sum(n);
    printf("sum is %d\n", result);

    return 0;
}
int sum(int n)
{
    if (n == 0 || n == 1)

        return n;
    else

        return n + sum(n - 1);
}

// sum using loop//
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter numbers :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}

// factorial using recursion//
#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int result = factorial(n);
    printf("factorial is %d\n", result);
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

#include <stdio.h>
int main()
{
    // factorial of number using loop//
    int n, fact = 1;
    printf("enter numbers :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);

    return 0;
}

// print nth term of fibonacci using recursion//
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The  fibonacci number  is%d", result);

    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)

        return n;

    else

        return fibonacci(n - 1) + fibonacci(n - 2);
}

// print  fibonacci sequence using loop & recursion//
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    else

        return fibonacci(n - 1) + fibonacci(n - 2);
}

// fibonacci using loop//
#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series is :");

    for (int i = 0; i <= n; i++)
    {
        printf(" %d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

#include <stdio.h>
// fibonacci series using only recursion ****//
int fibonacci(int n);
void printfibonacci(int i, int n);

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series is :");
    printfibonacci(0, n);
    return 0;
}

void printfibonacci(int i, int n)
{
    if (i >= n)
        return;
    printf("%d", fibonacci(i));
    printfibonacci(i + 1, n);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    else

        return fibonacci(n - 1) + fibonacci(n - 2);
}

// convert celsius to fahrenheit using Fuction//
#include <stdio.h>
float caltemp(float c);
int main()
{
    float c;
    printf("Enter temp of chelcius : ");
    scanf("%f", &c);

    caltemp(c);
    return 0;
}
float caltemp(float c)
{
    printf("The temparature in fahrenheit is :%f", 1.8 * c + 32);
}

// more readable of convert celsius to fahrenheit using Fuction//
#include <stdio.h>
float calctemp(float c);
int main()
{
    float c;
    printf("Enter temp of chelcius : ");
    scanf("%f", &c);
    printf("The temparature in fahrenheit is :%f", calctemp(c));

    calctemp(c);
    return 0;
}
float calctemp(float c)
{
    return (1.8 * c + 32);
}

// percentage of a student of marks  using Fuction//
#include <stdio.h>
float calNum(float sc, float m, float sans);
int main()
{
    float sc, m, sans;
    printf("Enter Number in science : ");
    scanf("%f", &sc);
    printf("Enter Number in math : ");
    scanf("%f", &m);
    printf("Enter Number in sanskrit : ");
    scanf("%f", &sans);

    float result = calNum(sc, m, sans);
    printf("The percentage is :%.3f", result);

    calNum(sc, m, sans);
    return 0;
}
float calNum(float sc, float m, float sans)
{
    return (sc + m + sans) / 3;
}