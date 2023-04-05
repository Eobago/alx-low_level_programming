#include "main.h"
#define NULL 0

/**
* _strstr - locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring to search for
* Return: pointer to index of string at first occurence of whole substring
*/
char *_strstr(char *haystack, char *needle)
{
	int b = 0, f, g;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[b] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */

		if (haystack[b] == needle[0])
		{
			g = b, f = 0;

			while (needle[f] != '\0')
			{
				if (haystack[g] == needle[f])
				g++, f++;

				else
				break;
			} /* if matched throughout, return haystack */

			if (needle[f] == '\0')
			{
				return (haystack + b);
			}
		}

		b++;
	}

	return (NULL); /* No match */
}
