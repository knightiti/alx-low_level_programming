#include "holberton.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
void swap_int(int *x, int *y)
{
int n;
n = *x;
*x = *y;
*y = n;
}
