#include <stdio.h>
int main()
{

    char c;
    printf("Enter any uppercase character: ");
    scanf("%c", &c);

    printf("%c\n", c + 32);

    return 0;
}