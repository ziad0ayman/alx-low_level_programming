#include "main.h"

int haha(int n, int i);
int prime(int n, int a);

/**
 * is_prime_number - checks for prime numbers
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - the recursive function
 * @n: the number to check
 * @a: counter
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0)
		return (0);
	return (prime(n, a - 1));
}
