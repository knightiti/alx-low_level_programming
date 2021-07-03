#include "holberton.h"
/**
 * _isupper - a function that checks for upper case characters
 *
 * Return: (1) if uppercase, (0) if otherwise.
 */

int _isupper(int c)
{
if ( c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
