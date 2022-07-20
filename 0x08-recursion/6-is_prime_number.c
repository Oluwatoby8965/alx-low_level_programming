#include "main.h"
/**
* prime_found - found prime number
* @i: dividend
* @j: divider
*
* Return: return 1 if the input integer is prime number, otherwise 0
*/
int prime_found(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
		{
			return (1);
		}
		else if (j % i == 0 || j <= 1)
		{
			return (0);
		}
		else
		{
			return (prime_found(i + 1, j));
		}
	}
	return (0);
}
