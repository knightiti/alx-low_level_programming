#include <stdio.h>
/**
 * main - Entry point
 * print size of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int il;
long long int ill;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(il));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ill));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
