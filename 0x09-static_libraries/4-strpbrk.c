#include "main.h"
#define NULL 0

/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int e = 0, k;

	while (s[e] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[e] == accept[k])
			{
				s = &s[e];
				return (s);
			}

		}

	e++;
	}

	return (NULL);

}
