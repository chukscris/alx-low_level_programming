#include "main.h"

/**
*_memcpy - memory copies
*@dest: copied memory destinaation
*@src: source of copied memory
*@n: number of byte to be copied
*Return: point to copied memory block
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
