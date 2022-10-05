#include "main.h"                              

/**
*create_array - create an array of chars
*@s: address of array
*@c: character to insert
*@n: number of bytes to be used
*Return: null                              
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;
	
	if (size == 0)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	
	return (array);
}
