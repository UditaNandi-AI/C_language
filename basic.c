// syntax//first c programme//
#include <stdio.h> //Header file//preprocesor directives//
int main()
{
    printf("Hello World");
    return 0;
}

// variable,datatype,format specifier,Input,output//
#include <stdio.h>
int main()
{
    int age;
    float price;
    char star; //'_'//
    printf("enter age:");
    scanf("%d", &age);
    printf("enter price:");
    scanf("%f", &price);
    printf("enter star:");
    scanf(" %c", &star);

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%c\n", star);
    return 0;
}

// calculate area of a square//
#include <stdio.h>

int main()
{
    float side;
    printf("Enter side: ");
    scanf("%f", &side);

    float result = side * side;

    printf("The area of square is: %f\n", result);

    return 0;
}

// calculate area of a circle//
#include <stdio.h>

int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float result = 3.14 * radius * radius;

    printf("The area of circle is: %f\n", result);

    return 0;
}

// calculate perimeter of a rectangle//
#include <stdio.h>

int main()
{
    float a;
    float b;
    printf("Enter length: ");
    scanf("%f", &a);
    printf("Enter width: ");
    scanf("%f", &b);

    float result = 2 * (a + b);

    printf("The perimeter of a rectangle is: %f\n", result);

    return 0;
}

// take a number from user and output its cube //
#include <stdio.h>

int main()
{
    float n;
    printf("Enter number: ");
    scanf("%f", &n);

    float result = (n * n * n);

    printf("The cube of number is: %f\n", result);

    return 0;
}
