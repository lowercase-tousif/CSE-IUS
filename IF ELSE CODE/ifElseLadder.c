// If-Else Ladder Example
#include <stdio.h>
int main()
{
    int num = 11;
    if (num == 0)
    {
        printf("The number is zero\n");
    }
    else if (num > 0 && num < 5)
    {
        printf("The number is between 1 and 4\n");
    }
    else if (num >= 5 && num < 10)
    {
        printf("The number is between 5 and 9\n");
    }
    else
    {
        printf("The number is greater than 10 or equal to 10\n");
    }
    return 0;
}