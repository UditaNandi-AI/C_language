// implicite & explicite type conversation
#include <stdio.h>
int main()
{
    int a = (int)1.99;
    printf("%d\n", a);
    return 0;
}
// 1

// opr. presedence & associativity
#include <stdio.h>
int main()
{

    printf("%d\n", 5 * 2 - 2 * 3);
    return 0;
}
// 4

// number is divisible by 2 or not (even or odd)using opr.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    printf("%d", n % 2 == 0); // true 1
                              // false 0
    return 0;
}
/*Enter number :8
1*/

// print 1 or 0 for if it's sunday & it's snowing using opr.
#include <stdio.h>
int main()
{
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSnowing && isSunday);

    return 0;
}
// 1

// print 1 or 0 for if it's monday  or it's raining using opr.
#include <stdio.h>
int main()
{
    int isMonday = 1;
    int isRaining = 0;
    printf("%d\n", isMonday || isRaining);

    return 0;
}
// 1

// if a number is greater than 9 & less than 100 using opr.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    printf(" number %d\n", 9 < n && n < 100);

    return 0;
}

// Write a program to print the avg. of three number:
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

    float result = (a + b + c) / 3;

    printf(" %f\n", result);

    return 0;
}
/*Enter first number :4
Enter second number :3
Enter three number :1
 2.666667*/

// Write a program to check if given character is digit or not
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the character :");
    scanf("%c", &ch);
    printf("%d", ch > '0' && ch <= '9');

    return 0;
}
/*Enter the character :e
0*/
/*Enter the character :3
1*/