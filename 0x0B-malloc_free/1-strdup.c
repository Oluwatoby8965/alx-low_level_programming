#include "main.h"

/**
* create_array - create locate array
* @size: size of array
* @c: type of array
*
* Return: pointer of array if all is good and Null if fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size ==  0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	/* Alway trust nobody */
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
