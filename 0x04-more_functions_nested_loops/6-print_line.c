#include "holberton.h"

/**
 * print_line - a function that prints a line
 * @n : number of times the line should be printed
 * Return: void.
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
