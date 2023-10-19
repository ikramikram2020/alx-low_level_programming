#include "lists.h"

/**
 * first - Apply the constructor attribute to the first() function so that it
 *         is executed before main().
 *
 * This function serves as a constructor and is automatically executed before
 * the main function when the program starts. It can be used to perform any
 * initialization or setup tasks that should occur before the program's main
 * logic begins.
 */
void first(void) __attribute__((constructor));

/**
 * first - Prints a message to the standard output before the main function
 *         is executed.
 *
 * This function is executed as a constructor before the main function and
 * prints a message to the standard output. It can be used for various
 * initialization tasks or for displaying program startup messages.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

