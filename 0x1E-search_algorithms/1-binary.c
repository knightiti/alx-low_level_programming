#include "search_algos.h"

/**
 * print_array - prints array separated by commas
 * @array: the array to be printedd
 * @size: size of the array
 */

void print_array(int *array, size_t size)
{
  size_t i;
  for ( i = 0; i < size - 1; i++)
    printf("%i, ", array[i]);
  printf("%i\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or, -1 if null 
 * or value not present in array 
 */

int binary_search(int *array, size_t size, int value)
{
  size_t middle = size / 2;
  if (array == NULL)
    return (-1);

  printf("Searching in array: ");
  print_array(array, size);
  {
    if (array[middle] == value)
      return (middle);
    if (array[middle] < value)
      size = middle + 1;
    else
      size = middle - 1;
  }
  return (-1);
}
