#include <stdio.h>
int main()
{
    printf("Printing all the odd numbers between 1 and 100: ");
    for (int i = 1; i <= 100; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}