/**
 * _isupper - Checks for uppercase character
 * @k: The character to be checked
 *
 * Return: 1 if k is uppercase, 0 otherwise
 */
int _isupper(int k)
{
    if (k >= 'A' && k <= 'Z')
        return (1);
    else
        return (0);
}

