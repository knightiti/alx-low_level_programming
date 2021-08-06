#include "main.h"

/**
 * set_bit - a func that sets the value of a bit to 1 at a given index.
 * @n: input
 * @index: index
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

if (n == NULL)
return (-1);

bit = 1 << index;
*n = *n | bit;

return (1);
}
