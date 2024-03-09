#include <stdio.h>
int main()
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], arr1[n], sum[n], i, s = 0;

    printf("Enter the elements of the first array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements of the second array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum[i] = arr[i] + arr1[i];
    }

    printf("Sum Array: [");
    for (i = 0; i < n; i++)
    {
        printf("%d", sum[i]);
        if (i < 2)
        {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}