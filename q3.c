#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf (" \n Enter a string to be reversed: ");
    scanf ("%s", str);

    printf (" \n reverse of a string: %s ", strrev(str));
    return 0;
}
