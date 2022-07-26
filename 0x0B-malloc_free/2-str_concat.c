#include "main.h"

/**
* str_concat - concate two strings
* @s1: string one
* @s2: string two
*
* Return: return concated string on sucess and NULL on failier
*/
char *str_concat(char *s1, char *s2)
{
	char *concated;
	unsigned int i, j, k, stop;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	concated = malloc(sizeof(char) * (i + j + 1));

	if (concated == NULL)
	{
		free(concated);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concated[k] = s1[k];

	stop = j;
	for (j = 0; j <= stop; k++, j++)
		concated[k] = s2[j];

	return (concated);
}
