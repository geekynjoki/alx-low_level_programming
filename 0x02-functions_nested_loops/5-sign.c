#include "main.h"

/**
 * print_sign - determines if input number is greater equal or less than zero
 *
 * @n:the input number is an integer
 * Return 1 greater than zero 0 is zero -1 is less than 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
