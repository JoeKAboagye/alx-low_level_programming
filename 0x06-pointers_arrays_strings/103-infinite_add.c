#include "holberton.h"

/**
 * infinite_sum - sums two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: Buffer the function uses to store the result
 * @size_r: buffer size:
 * Return: Resulting stored sum
 */

char *infinite_sum(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, op, bg, dr1, dr2, sum = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		bg = a1;
	else
		bg = a2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	a1--, a2--, size_r--;
	dr1 = *(n1 + a1) - 48, dr2 = *(n2 + a2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + sum;
		if (op >= 10)
			sum = op / 10;
		else
			sum = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (a1 > 0)
			a1--, dr1 = *(n1 + a1) - 48;
		else
			dr1 = 0;
		if (a2 > 0)
			a2--, dr2 = *(n2 + a2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
