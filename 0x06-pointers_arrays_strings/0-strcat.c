#include "main.h"
#include <stdio.h>

/**
 * this is a program that concatenates two strings
 * Prototype: char *_strcat(char *dest, char *src);
 * this function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte Returns a pointer to the resulting string dest
 */

int main(void)
{
    char str1[98] = "src";
    char str2[100] = "dest";

    strcat(str1, str2);
    printf("%s\n", str1);
    return (0);
}
