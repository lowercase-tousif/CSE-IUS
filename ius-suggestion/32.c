#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("myname.txt", "w");

    if (fptr == NULL)
    {
        printf("File not found.\n");
    }
    else
    {
        fprintf(fptr, "My name is Tousif Tasrik");
    }
    fclose(fptr);
    return 0;
}