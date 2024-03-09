#include <stdio.h>
int main()
{
    int a, b, t;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swap: \n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    t = a;
    a = b;
    b = t;
    printf("After swapping: \n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    return 0;
}