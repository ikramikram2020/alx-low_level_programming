#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *s = (char *)malloc(sizeof(char) - 1);
if (str == NULL)
{
return (NULL);
}
s = strdup(str);
return (s);
free(s);
}
