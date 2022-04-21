#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @scr: char type string
 * description: copy string pointed to by pointer 'scr' to
 * the buffer pointed to by 'dest'
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
