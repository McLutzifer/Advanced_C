#include <stdio.h>

int main()
{
    int f, *fptr;

    fptr = &f;
    *fptr = 89;

    printf("Here is a value: %d\n", *fptr);
    printf("Here is a value plus 1: %d\n", ++*fptr);

    return 0;
}