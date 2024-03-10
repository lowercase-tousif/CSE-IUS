#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, digit;
    bool appeared[10] = {false};

    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;

    while (temp)
    {
        digit = temp % 10;
        if (appeared[digit])
        {
            printf("%d is not a strange number.\n", num);
            return 0;
        }
        appeared[digit] = true;
        temp /= 10;
    }

    printf("%d is a strange number.\n", num);
    return 0;
}
