#include "main.h"

/**
* print_most_numbers - print numbers fom 0 to 9 wihout 2 and 4.
*
* Return: Always nothing
*/
void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
		if ((i != 50) && (i != 52))
			_putchar(i);

	_putchar('\n');
	
	return(0);
}
