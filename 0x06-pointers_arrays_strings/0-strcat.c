#include "main.h"
/*
 * _strcat => this function used to connect two strings
 * @dest: the first char string
 * @src: the second char string
 * Return a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return temp;
}

