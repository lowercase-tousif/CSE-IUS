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

    int k;
    printf("Enter the element you want to search: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("Element is found at: %d index.\n", i);
        }
    }

    return 0;
}