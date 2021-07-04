#include "holberton.h"

/**
 * print_triangle - a function that prints triangle.
 * @size: size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - i - 1)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
