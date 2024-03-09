#include <stdio.h>
int main()
{
    int arr[2][4], i, j, s = 0;
    printf("Enter the elements of the array: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            s += arr[i][j];
        }
    }

    printf("Sum of all values:  %d\n", s);
    return 0;
}