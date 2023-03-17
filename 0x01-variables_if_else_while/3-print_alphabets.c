#include <stdio.h>

/**
 * main - Prints alphabet in lower and uppercase
 *
 * Return 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
