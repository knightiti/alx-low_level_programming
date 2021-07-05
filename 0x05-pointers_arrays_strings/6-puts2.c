#include "holberton.h"
/**
 * puts2 - a function that prints the first and every other character of a string.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
int c;
char l;
for (c = 0; str[c] != 0; c++)
{
if (c % 2 == 0)
{
l = str[c];
_putchar(l);
}
}
_putchar('\n');
}
