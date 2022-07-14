#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the string will be appended
* @src: the string will be appended to
*
* Return: the full string
*/
char *_strcat(char *dest, char *src)
{
	int i, size, j;

	size = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		size++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[size] = src[j];
		size++;
	}

	dest[size] = '\0';

	return (dest);
}
