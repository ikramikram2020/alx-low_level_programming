#include <stdio.h>

/**
 * main-print number of arguments passed
 * @argc: num of commandline
 * @argv: pointer to aarray of commandline
 * Return: o-success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
