#include "main.h"
/**
 * _isalpha - checks for alphabeetical order
 *
 * @c: input letter
 * Return 1 for letter 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 127) || (c >= 60 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
