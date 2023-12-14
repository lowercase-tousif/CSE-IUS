// Nested If-Else Example
#include <stdio.h>
int main()
{
    int num = 5;
    if (num > 0)
    {
        printf("Positive Number\n");
        if (num % 2 == 0)
        {
            printf("Even number\n");
        }
        else
        {
            printf("Odd number\n");
        }
    }
    else
    {
        printf("Negative Number\n");
        if (num % 2 == 0)
        {
            printf("Even number\n");
        }
        else
        {
            printf("Odd number\n");
        }
    }
    return 0;
}