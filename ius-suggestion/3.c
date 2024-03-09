#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("A is bigger.\n");
    else if (b > a && b > c)
        printf("B is bigger.\n");
    else
        printf("C is bigger.\n");
    return 0;
}