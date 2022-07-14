#include "main.h"

/**
* string_toupper - change all lowercase letters of a string to uppercase
* @s: string will change
*   
* Return: always uppercase string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}

	return (s);
}
