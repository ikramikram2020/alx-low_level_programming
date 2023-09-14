/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);  // Return 1 if c is within the uppercase letter range (A-Z)
    else
        return (0);  // Return 0 if c is not within the uppercase letter range
}

