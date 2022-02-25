#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: First operand
 * @argv: Second operand
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
