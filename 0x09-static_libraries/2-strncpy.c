#include "main.h"

/**
<<<<<<< HEAD
 *  * _strlen - This prints the length of the string
 *   * @s: The string
 *    * Return: length of the string
 *     */
int _strlen(char *s)
{
		int a = 0;

			while (s[a] != '\0')
					{
								a++;
									}

				return (a);
=======
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
>>>>>>> refs/remotes/origin/main
}
