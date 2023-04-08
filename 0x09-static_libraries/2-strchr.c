#include "main.h"
#define NULL 0

/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search
* @c: target characer
* Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int p = 0;

	while (s[p] != '\0' && s[p] != c)
		p++;

	if (s[p] == c)
		return (&s[p]);

	else
		return (NULL);
}
