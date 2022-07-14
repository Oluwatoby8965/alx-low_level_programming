#include "main.h"

/**
* _strncat - concatenates two strings n times
* @dest: concated string
* @src: concated to string
* @n: number of bytes will concated from src
*
* Return: dest as concated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, size, j;

	size = 0;
	for (i = 0; dest[i] != '\0'; i++)
		size++;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;

		dest[size] = src[j];
		size++;
	}

	dest[size] = '\0';

	return (dest);
}
