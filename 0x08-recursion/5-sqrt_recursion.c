#include "main.h"

int haha(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (haha(n, 0));
}

/**
 * haha - the recursive function
 * @n: the number to get the root from
 * @i: counter
 * Return: the root
 */
int haha(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (haha(n, i + 1));
}
