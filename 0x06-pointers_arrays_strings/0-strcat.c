#include "main.h"
#include <stio.h>

/**
 * this is a program that concatenates two strings
 * Prototype: char *_strcat(char *dest, char *src);
 * this function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte Returns a pointer to the resulting string dest
 */

int main(void)
{
    char s1[98] = "src";
    char s2[] = "dest";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
