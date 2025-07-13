#include <stdio.h>
// check a number prime or not//
int main()
{
    int n, isPrime = 1; // flag//
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not prime number\n");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not prime number\n");

    return 0;
}

// print all the prime number in a range//
#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter number: ");
    scanf("%d", &start);
    printf("Enter number: ");
    scanf("%d", &end);

    for (int n = start; n <= end; n++)
    {

        int isPrime = 1;

        if (n <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
            printf("%d  is prime\n", n);
        // else
        // printf("Not prime number\n"); dorkar naii//
    }
    return 0;
}
