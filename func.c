#include <stdio.h>
#include <string.h>
void main()
{
    char first[100] = "слово ";
    char *a = first;
    char second[100] = "слово";
    char *b = second;

    strcat(a, b);
    puts(a);
    return 0;

}
