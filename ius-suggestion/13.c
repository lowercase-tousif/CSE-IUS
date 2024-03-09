#include <stdio.h>
int main()
{
    int n, r = 0, orgNum;
    printf("Enter the number: ");
    scanf("%d", &n);
    orgNum = n;
    while (n != 0)
    {
        r = (r * 10) + (n % 10);
        n /= 10;
    }

    if (r == orgNum)
        printf("%d is palindrome.\n", orgNum);
    else
        printf("%d is not palindrome.\n", orgNum);
    return 0;
}