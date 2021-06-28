#include "holberton.h"
/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
*str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(*str);
}
