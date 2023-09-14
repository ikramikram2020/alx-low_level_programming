#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++) { // Outer loop runs 10 times
        for (j = 0; j <= 14; j++) { // Inner loop prints numbers from 0 to 14
            if (j > 9) {
                _putchar((j / 10) + '0'); // Print the tens digit
            }
            _putchar((j % 10) + '0'); // Print the ones digit
        }
        _putchar('\n'); // Print a newline after each set of numbers
    }
}
