#include "main.h"

/**
* _memcpy - copies memory area
* @dest: updated memory
* @src: copied memory
* @n: number of places will change
*
* Return: copied array
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
