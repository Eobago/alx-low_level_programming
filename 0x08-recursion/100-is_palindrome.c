#include "main.h"
/**
 * palindromeChecker - checks the string
 * @mtr: the string to be checked
 * @gen: the length of the string
 * @p: the incrementor, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindromeChecker(char *mtr, int gen, int p)
{
	if (i < gen && mtr[p] == mtr[gen])
		return (palindromeChecker(mtr, gen - 1, p + 1));
	if (mtr[p] != mtr[gen])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
