// number is divisible by 2 or not (even or odd)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("divisible by 2 or even"); // true 1
    }
    else
    {
        printf("not divisible by 2 or odd"); // false 0
    }

    return 0;
}
/*Enter number :6
divisible by 2 or even*/

// Write a program to print the smallest number
#include <stdio.h>
int main()
{

    float a, b, c;

    printf("Enter first number :");
    scanf("%f", &a);
    printf("Enter second number :");
    scanf("%f", &b);
    printf("Enter three number :");
    scanf("%f", &c);

    if (a < b && a < c)
    {

        printf("a is smallest %f", a);
    }
    else if (b < a && b < c)
    {

        printf("b is  smallest %f", b);
    }
    else
    {
        printf("c is smallest %f", c);
    }

    return 0;
}
/*Enter first number :4
Enter second number :3
Enter three number :2
c is smallest 2.000000*/

// voting eligible or not//
#include <stdio.h>
int main()
{

    int age;
    printf("Enter age :");
    scanf("%d", &age);

    if (age > 18)
    {

        printf("adult & can vote");
    }

    else
    {
        printf("not eligible for voting ");
    }

    return 0;
}

// adult teenager or child/
#include <stdio.h>
int main()
{

    int age;
    printf("Enter age :");
    scanf("%d", &age);

    if (age >= 18)
    {

        printf("adult");
    }

    else if (age > 13 && age < 18)
    {
        printf("teenagers");
    }
    else
    {
        printf("child");
    }

    return 0;
}

// ternary opr. or conditional opr.
#include <stdio.h>
int main()
{

    int age;
    printf("Enter age :");
    scanf("%d", &age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");
    return 0;
}

// use or switch case & break :
#include <stdio.h>
int main()
{

    int day;
    printf("Enter day :");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("invalid day");
        break;
    }
    return 0;
}
// or

#include <stdio.h>
int main()
{

    char day;
    printf("Enter day :");
    scanf("%c", &day);

    switch (day)
    {
    case 'M':
        printf("Monday");
        break;

    case 'T':
        printf("Tuesday");
        break;
    case 'W':
        printf("Wednesday");
        break;
    case 't':
        printf("Thusday");
        break;
    case 'F':
        printf("Friday");
        break;
    case 'S':
        printf("Saturday");
        break;
    case 's':
        printf("Sunday");
        break;

    default:
        printf("invalid day");
        break;
    }
    return 0;
}

// nested if :
#include <stdio.h>
int main()
{

    int number;
    printf("Enter number:");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("positive");
        if (number % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("negative");
        if (number % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}

// program to check if a student passed or failed:
#include <stdio.h>
int main()
{

    int m;
    printf("Enter marks :\n");
    scanf("%d", &m);

    if (m > 30 && m <= 100)
    {
        printf("passed");
    }
    else if (m <= 30)
    {
        printf("failed");
    }
    else
    {
        printf("wrong nummber");
    }

    return 0;
}

// program to print a student grade:
#include <stdio.h>
int main()
{

    int m;
    printf("Enter marks :\n");
    scanf("%d", &m);

    if (m >= 90 && m <= 100)
    {
        printf("Grade A+");
    }
    else if (m >= 70 && m < 70)
    {
        printf("Grade A");
    }
    else if (m >= 40 && m < 60)
    {
        printf("Grade c");
    }
    else if (m < 30)
    {
        printf("Grade D");
    }
    else
    {
        printf("No grade");
    }

    return 0;
}

// program to check if X is equal 1 or not
#include <stdio.h>
int main()
{

    int x = 2;

    if (x = 1)
    {
        printf("x is equal to 1");
    }

    else
    {
        printf("x is not equal to 1");
    }

    return 0;
}

// program to check if a character uppercase or not
#include <stdio.h>
int main()
{

    char ch;
    printf("Enter character\n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch < 'Z')
    {
        printf("uppercase");
    }
    else if (ch >= 'a' && ch < 'z')
    {
        printf("lowercase");
    }
    else
    {
        printf("not valid");
    }

    return 0;
}

// program to check if a number natural or not
#include <stdio.h>
int main()
{

    int num;
    printf("Enter number\n");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("natural number");
    }

    else
    {
        printf("not natural number");
    }

    return 0;
}
