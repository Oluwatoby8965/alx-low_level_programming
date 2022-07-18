#include "main.h"

/**
* _memset - files memory with a constant byte.
* @s: the 2d array
* @b: memory location
* @n: length of memory
*
* Return: updated array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
