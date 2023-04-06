#include "main.h"

/**
 * helper_guide - Finds the square root of two numbers
 * @r: The number
 * @e: The number to test for the square root of @a
 * Return: square root
 */
int helper_guide(int r, int e)
{
	if (e * e > r)
		return (-1);

	else if (e * e == r)
		return (e);

	else
		return (helper_guide(r, e + 1));

	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper_guide(n, 1));
}

