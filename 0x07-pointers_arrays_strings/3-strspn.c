#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string will counted from
* @accept: string will count it's characters from s
*
* Return: Always number of prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
