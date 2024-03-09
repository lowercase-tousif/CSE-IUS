#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int res = add(a, b);
    printf("Addition is: %d\n", res);
    return 0;
}