#include <stdio.h>

int sum_array(int arr[], int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
    {
        s += arr[i];
    }

    return s;
}

int main()
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int res = sum_array(arr, n);
    printf("Sum of the array is: %d", res);
    return 0;
}