#include "main.h"

/**
 * _strspn - return length of strings that matches values consistently
 * @s: strings to search
 * @accept: target matches
 * Return: number of bytes matched
 */
unsigned int _strspn(char *s, char *accept);
{
	int p = 0, q;

	int matches = 0;

	while (s[p] != '\0') /*iterate through strings*/
	{
		for (q = 0; accept[q] != '\0'; q++) /*iterate through target*/
		{
			if (s[p] == accept[q]) /*record & break at first match*/
			{
				matches++;
				break;

			}
			if (accept[q + 1] == '\0' && s[p] != accept[q])
				return (matches); /*return if it doesnt match*/
		}
		p++;
	}
	return (matches); /*return if it all match till end*/
}
