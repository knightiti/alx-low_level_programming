#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that prints each array elem on a new one
 * @array: array
 * @size: The number of elememts to print
 * @action: Function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL)
return;
if (action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
