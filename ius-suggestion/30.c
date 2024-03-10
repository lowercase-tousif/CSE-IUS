#include <stdio.h>
int main()
{
    int r;
    printf("Enter the rows: ");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}