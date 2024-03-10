#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    int small = fact(n - 1);
    int big = n * small;
    return big;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int res = fact(n);
    printf("Factorial of %d is: %d\n", n, res);
    return 0;
}