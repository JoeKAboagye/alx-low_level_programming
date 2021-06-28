#include "holberton.h"

/**
 * _atoi - Convert strings to integers
 * @s: character
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int c = 0;
	int number;

	while (*s)
	{
		if (*s == '-')
		{
			c++;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = *s - '0';
			s++;
			while (*s >= '0' && *s <= '9')
			{
				number = (number * 10) + (*s - '0');
				s++;
			}
			if (c % 2 == 1)
				return (number * (-1));
			else
				return (number);

		}
		else
			s++;


	}
	return (0);

}
