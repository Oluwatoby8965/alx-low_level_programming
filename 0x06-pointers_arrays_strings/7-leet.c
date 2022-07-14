#include "main.h"

/**
* leet - encode a string into 1337
* @s: string will be replaced
*
* Return: return replaced character
*/
char *leet(char *s)
{
	int i, j;
	int lower_c[] = {97, 101, 111, 116, 108};
	int upper_c[] = {65, 69, 79, 84, 76};

	int replaced_num[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower_c[j] || s[i] == upper_c[j])
			{
				s[i] = replaced_num[j];
				break;
			}
		}
	}
	return (s);
}
