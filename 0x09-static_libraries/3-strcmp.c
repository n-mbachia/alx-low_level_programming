#include "main.h"

/**
 * _strcmp - comparestwo strings
 * @s1: string 1
 * @s2: string 2
 * Return: less than 0 if s1is less than 2, 0 if they are equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
