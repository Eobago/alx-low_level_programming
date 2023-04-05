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
	int p = 0, q;

	while (s[p] != '\0')
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (s[p] == accept[q])
			{
				s = &s[p];
				return (s);
			}

		}

	p++;
	}

	return (NULL);

}
