#include "holberton.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *c)
{
int i = 1, sum = 0;
char pl = c[0];

while (pl != '\0')
{
sum++;
pl = c[i++];
}
return (sum);
}

