#include "main.h"
#include <string.h>
/**
 * _strpbrk - Search for a string of any set of bytes.
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s or null if no such byte type is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *p = strpbrk(s, accept);
return (p);
}
