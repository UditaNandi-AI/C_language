// use of sizeof opr.//
#include <stdio.h>

int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    return 0;
}
/*4
4
1*/

// malloc function//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
/*1
3
5
7
9*/

// malloc function
// allocate memory to store 5 prices//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 1.987;
    ptr[1] = 3.677;
    ptr[2] = 5.34;
    ptr[3] = 7.12345;
    ptr[4] = 9.098;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}
/*1.987000
3.677000
5.340000
7.123450
9.098000*/

// calloc function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}
/*0.000000
0.000000
0.000000
0.000000
0.000000*/
// all zero//

// calloc function
// allocate memory size n
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}
/*enter n: 8
0
0
0
0
0
0
0
0*/
// Free function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}
/*enter n: 5
0
0
0
0
0
0
0*/

// realloc function
// allocate memory for 5 numbers and inc. to 8 number//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers(5) :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("enter numbers(8) :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("number %d is %d", ptr[i]);
    }
    return 0;
}

// array of size 5 enter value from the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers(5) :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("number %d is %d", ptr[i]);
    }
    return 0;
}

// first 5 odd number reallocate to store 6 even number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("number %d\n", ptr[i]);
    }
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for (int i = 0; i < 6; i++)
    {
        printf("number %d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}
/*number 1
number 3
number 5
number 7
number 9
number 2
number 4
number 6
number 8
number 10
number 12*/