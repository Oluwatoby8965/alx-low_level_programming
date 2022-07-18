#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string will be located char in
* @c: char that will start with
*
* Return: selected string if c is founded and null if not
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
