#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of own main function
 *
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: int
 */
int main(int argc, char *argv[])
{
int i, value;

if (argc != 2)

{
printf("Error\n");
exit(1);
}
value = atoi(argv[1]);

if (value < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < value; i++)
{
printf("%02hhx", *((unsigned char *) main + i));
if (i < value - 1)
printf(" ");
else
printf("\n");
}
return (0);
}

