#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * Retunr: pointer to char*
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while
	(*s++);
	return (s);
}
