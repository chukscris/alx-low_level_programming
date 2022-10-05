#include "main.h"

/**
*create_array - create an array of chars, and
*initialise with a specific character
*@size: address of array
*@c: character to insert
*Return: null
*pointer to array if everything initialize
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = (sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
