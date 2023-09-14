#include "main.h"
/*
 *print_most_numbers - check the code.
 *
 *Return: Always
 */
void more_numbers(void);
{
	int main() {
    int i, j;

    for (i = 0; i < 10; i++) { 
        for (j = 1; j <= 14; j++) { 
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}
