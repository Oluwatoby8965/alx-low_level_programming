#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: array will be copied to
* @src: string will be copied
*
* Return: return string
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dest);
}
