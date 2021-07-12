#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry Point
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
