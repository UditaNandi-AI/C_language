#include <stdio.h>
int main()
{
    // ARMSTRONG NUMBER//
    int n, r, sum = 0, temp;
    printf("Enter number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {

        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("armsrtong number");
    }
    else
    {
        printf(" Not armsrtong number");
    }
    return 0;
}
