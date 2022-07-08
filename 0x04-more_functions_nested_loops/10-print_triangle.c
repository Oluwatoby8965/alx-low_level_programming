#include "main.h"

/**
* print_triangle - print a triangle
* @size: height and width of triangle
*
* Return: Always nothing
*/
void print_triangle(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = row; column < size; column++)
		{
			_putchar(' ');
		}

		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
