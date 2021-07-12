#include "holberton.h"

/**
 * main - adds two integers
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j = 1, sum = 0;

	if (argc > 1)
	{
		for (; j < argc; j++)
		{
			if (checker(argv[j]))
				sum += atoi(argv[j]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
