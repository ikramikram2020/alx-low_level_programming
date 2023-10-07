#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc
 *@b: number of bytes to be allocated in memory
 *
 *Return: void pointer  else exit with value 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;


	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
