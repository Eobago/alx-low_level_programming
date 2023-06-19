#include "main.h"
/**
* _strspn - return length of string that matches values consistently
* @s: string to search
* @accept: target matches
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{
	int p = 0, q;
	int matches = 0;

	while (s[p] != '\0') /*iterate through string*/
	{

		for (q = 0; accept[q] != '\0'; q++) /*iterate through target*/
		{
			if (s[p] == accept[q]) /*record & break at first match*/
			{
				matches++;
				break;
			}

			if (accept[q + 1] == '\0' && s[p] != accept[q])

			return (matches);/*return if idx doesn't match*/
		}

		p++;
	}

	return (matches); /* return num if all match till end */

}
