#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the character to be checked
 * Return: 1 fo lowercase and 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

_putchar('\n');
}
