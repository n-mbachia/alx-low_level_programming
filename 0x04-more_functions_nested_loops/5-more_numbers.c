#include "main.h"

/**
 * more numbers - prints numbers
 * Return:Always 0
 */

void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}