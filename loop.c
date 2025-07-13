// print hello world 5 times
#include <stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Hello World\n");
    }
    return 0;
}

// print 1 to 100
#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// print 10 to 1
#include <stdio.h>
int main()
{

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

// print a to z
#include <stdio.h>
int main()
{

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }
    return 0;
}

// pre & post increment
#include <stdio.h>
int main()
{
    int i = 1;

    printf("%d\n", i++);
    printf("%d\n", ++i);
    printf("%d\n", i);
    return 0;
}
/*1
3
3
*/

// infinity loop
#include <stdio.h>
int main()
{
    for (int i = 0;; i++)
    {
        printf("Hello World");
    }
    return 0;
}

// while loop
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}

// print the numbers from 0 to n
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// do while loop
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5); ///;//
    return 0;
}

// print the sum of the number 0 to n
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
} /*Enter number
 6
 21*/

#include <stdio.h>
int main()
{
    // sum of number in loop and its reverse//
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    // table of number//
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {

        printf("%d\n", n * i);
    }
    return 0;
}
// table from reverse order//
#include <stdio.h>
int main()
{

    int n;
    printf("enter numbers :");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {

        printf("%d\n", n * i);
    }
    return 0;
}

// break statement
#include <stdio.h>
int main()
{

    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }

        printf("%d\n", i);
    }
    printf("end");

    return 0;
} /*1
 2
 end*/

// taking input numbers as input from user until user enter an odd number//
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("odd number");

    return 0;
}

// taking input numbers as input from user until user enter number which is multiple of seven//
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("multiple of seven");

    return 0;
}
// continue statement
#include <stdio.h>
int main()
{

    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }
    printf("end");

    return 0;
} /*1
 2
 4
 5
 end*/

// print 1 to 10 except 6
#include <stdio.h>
int main()
{

    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}

// print odd numbers from 5 to 50
#include <stdio.h>
int main()
{

    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}

// calculate the sum of  numbers from 5 to 50

#include <stdio.h>
int main()
{

    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
} /*1265*/