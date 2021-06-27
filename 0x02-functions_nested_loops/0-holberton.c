#include "holberton.h"
/**
 * main - entry point
 * print Holberton
 * Return: Always 0 (Success)
 */
int main(void)
{
char *c = "Holberton\n";

while (*c)
{
_putchar(*c++);
}
return (0);
}
