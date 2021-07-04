#include "holberton.h"
/**
 * print_numbers - A function that print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
int n;

for (n = 0; n < 10; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
