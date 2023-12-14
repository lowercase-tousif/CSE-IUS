// Nested Switch Statement
#include <stdio.h>
int main()
{
    int outerChoice, innerChoice;
    printf("Select a category:\n");
    printf("1.Animals\n");
    printf("2.Colors\n");
    printf("Enter your choice: \n");
    scanf("%d", &outerChoice);

    switch (outerChoice)
    {
    case 1:
        printf("Animal Options: \n");
        printf("1.Lion\n");
        printf("2.Tiger\n");
        scanf("%d", &innerChoice);
        switch (innerChoice)
        {
        case 1:
            printf("You have selected Lion\n");
            break;
        case 2:
            printf("You have selected Tiger\n");
            break;
        default:
            printf("invalid inner choice\n");
            break;
        }
        break;
    case 2:
        printf("Color options: \n");
        printf("1.Red\n");
        printf("2.Blue\n");
        scanf("%d", &innerChoice);
        switch (innerChoice)
        {
        case 1:
            printf("You have selected Red\n");
            break;
        case 2:
            printf("You have selected Blue\n");
            break;
        default:
            printf("invalid inner choice\n");
            break;
        }
        break;
    default:
        printf("Invalid outer choice\n");
        break;
    }
    return 0;
}