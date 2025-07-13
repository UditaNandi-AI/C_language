// function declaraton or prototype//
void printHello();

// function call//
int main()
{
    printHello(); //(number of calling)//
    printHello();

    return 0;
}

// function definition//
void printHello()
{
    printf("Hello\n");
    printf("Hiii\n");
}

// hello and goodbye in different function//
#include <stdio.h>

void printHello();
void printgoodbye();

int main()
{
    printHello();
    printgoodbye();

    return 0;
}

void printHello()
{
    printf("Hello\n");
}

void printgoodbye()
{
    printf("Goodbye\n");
}

#include <stdio.h>
// print i for namaste and f for french//
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("enter f for french & i for indian :");
    scanf("%C", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else if (ch == 'f')
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("namaste\n");
}

void bonjour()
{
    printf("bounjour\n");
}

#include <stdio.h>

int sum(int a, int b); // function declare//

int main()
{
    int a, b; // take input//
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    int s = sum(a, b); // function call//
    printf("sum is : %d ", s);
    return 0;
}

int sum(int x, int y) // copy send to refference//
{
    return x + y;
}

// table of n number using function/
#include <stdio.h>

void printTable(int n);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printTable(n); // actual parameter//

    return 0;
}
void printTable(int n) // formal parameter//
{
    for (int i = 1; i <= 10; i++)
    {
        printf(" %d\n", n * i);
    }
}

#include <stdio.h>
// price with 18% GST//
void price(float n);

int main()
{

    float n;
    printf("Enter number : ");
    scanf("%f", &n);

    price(n);

    return 0;
}

void price(float n)
{
    n = n + (0.18 * n);
    printf("final price is : %f\n", n);
}

#include <stdio.h> //power of n number//
#include <math.h>
int main()
{

    float n;
    printf("Enter number : ");
    scanf("%f", &n);

    printf("%f", pow(n, 2));

    return 0;
}

#include <stdio.h>
// calculate area of a square,a circle, a rectangle//
void sqrArea(int a);
void cirArea(float r);
void rectArea(int x, int y);

int main()
{

    int a, x, y;
    float r;
    printf("Enter side : ");
    scanf("%d", &a);
    printf("Enter rad : ");
    scanf("%f", &r);
    printf("Enterlenth : ");
    scanf("%d", &x);
    printf("Enter width : ");
    scanf("%d", &y);

    sqrArea(a);
    cirArea(r);
    rectArea(x, y);

    return 0;
}
void sqrArea(int a)
{
    printf("The area of the sqr is : %d\n", a * a);
}
void cirArea(float r)
{
    printf("The area of the circle is : %f\n", 3.14 * r * r);
}
void rectArea(int x, int y)
{
    printf("The area of the rect is : %d\n", x * y);
}

#include <stdio.h>
// more readable and useable above coding//
float squareArea(float a);
float circleArea(float r);
float rectangleArea(float a, float b);

int main()
{
    float a, r, b;
    printf("Enter side : ");
    scanf("%f", &a);
    printf("Enter rad : ");
    scanf("%f", &r);
    printf("Enter width : ");
    scanf("%f", &b);
    printf("area of rect is : %f", rectangleArea(a, b));
    return 0;
}
float squareArea(float a)
{
    return a * a;
}
float circleArea(float r)
{
    return 3.14 * r * r;
}
float rectangleArea(float a, float b)
{
    return a * b;
}
