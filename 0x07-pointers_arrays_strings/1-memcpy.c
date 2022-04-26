#include "main.h"

/**
 * _memcpy - function copies n byte from memory source area
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i); // value of address dest = to value of address source both incrimented  
		i++; // increment of loop
	}
	return (dest);
}
