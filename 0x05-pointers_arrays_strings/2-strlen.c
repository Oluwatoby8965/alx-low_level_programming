#include "main.h"

/**
* _strlen - print string lingth
* @s: string will be calculated
*
* Return: length of string
*/
int _strlen(char *s)
{
	int len, i;

	len = 0;
	i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
