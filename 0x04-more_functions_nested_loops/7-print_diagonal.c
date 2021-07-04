#include "holberton.h"
/**
 * print_diagonal - a function that prints a diagonal
 * @n: number of times the diagonal should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
