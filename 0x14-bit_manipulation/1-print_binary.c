#include "main.h"

/**
 * print_binary - a funct that prints the binary representation of a number.
 * @n: dec input
 * Return: 0
 */

void print_binary(unsigned long int n)
{
unsigned long int m = n;
int i = 0, k;

if (n == 0)
_putchar('0');

while (m > 0)
{
m = m >> 1;
i++;
}

for (i--; i >= 0; i--)
{
k = n >> i;
if (k & 1)
_putchar('1');
else
_putchar('0');
}
}
