#include "main.h"

int _strlen_recursion(char *s);
int checker(char *s, int a, int b);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - outputs length of string
 * @s: the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks for palindrome
 * @s: string
 * @a: counter
 * @b: length of string
 * Return: 1 for palindrome, otherwise 0
 */
int checker(char *s, int a, int b)
{
	if (*(s + a) != *(s + (b - 1)))
		return (0);
	if (a >= b)
		return (1);
	return (checker(s, a + 1, b - 1));
}
