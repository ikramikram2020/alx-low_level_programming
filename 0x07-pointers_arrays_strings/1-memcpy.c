#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: memory area to copy to.
 * @src: memory area to copy from.
 * @n: bytes of memory.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = memcpy(dest, src, n);
return (p);
}
