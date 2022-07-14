#include "main.h"

/**
* _strncpy - copies a string
* @dest: will copied to
* @src: will be copied
* @n: number of charters
*
* Return: the string that copied
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
