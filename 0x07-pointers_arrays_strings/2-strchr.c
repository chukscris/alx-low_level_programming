#include "main.h"

/**
* _strchr - locate character in a string
* @s: check string
* @c: check character
* Return: pointer to spot in s with c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
