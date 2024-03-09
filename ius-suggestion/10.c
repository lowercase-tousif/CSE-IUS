#include <stdio.h>
int main()
{
    int n, f = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime number\n", n);
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("%d is a prime number.\n", n);

    return 0;
}