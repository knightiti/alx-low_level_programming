#include "holberton.h"
/**
 * times_table - entry point
 * a function that prints the 9 times table, starting with 0
 * Return: Void
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
_putchar('0');
_putchar(',');
for (j = 1; j <= 9; j++)
{
_putchar(' ');
if (i * j < 10)
{
_putchar(' ');
_putchar(i * j  + '0');
}
else
{
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
}
if (j < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
