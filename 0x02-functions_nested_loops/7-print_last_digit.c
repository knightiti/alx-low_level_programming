#include "holberton.h"
/**
 * print_last_digit - entry point
 * @i: integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
i %= 10;
if (i < 0)
i = -i;
{
_putchar(i + '0');
}
return (i);
}
