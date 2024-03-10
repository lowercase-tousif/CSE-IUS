#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("myname.txt", "w");
    fprintf(fptr, "My name is Tousif Tasrik");
    fclose(fptr);
    return 0;
}