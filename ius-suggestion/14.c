#include <stdio.h>
int main()
{
    int c = 0;
    char str[50];
    gets(str);

    printf("Vowels Found: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}