#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
