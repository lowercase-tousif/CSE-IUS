#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], i, s = 0;

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // pointer variable
    int *ptr = &arr;

    for (i = 0; i < n; i++)
    {
        s += *(ptr + i);
    }

    printf("Sum of the all array elements using pointer: %d\n",s);

    return 0;
}