#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    int *ptr = &a;
    int *ptr2 = &b;

    printf("Addition of two pointer: %d\n", *ptr + *ptr2);
    return 0;
}