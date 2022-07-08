#include "main.h"

/**
* positive_or_negative - chech number if positive or negative
* @i: Number will be checked
*
* Return: Always nothing
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
