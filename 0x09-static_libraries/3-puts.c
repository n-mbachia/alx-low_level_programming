#include "main.h"

/**
<<<<<<< HEAD
 *  * _puts - This prints a string
 *   * @str: String
 *    */
void _puts(char *str)
{
		int a;

			for (a = 0; str[a] != '\0'; a++)
					{
								_putchar(str[a]);
									}
				_putchar('\n');
=======
 * _puts - This prints a string
 * @str: String
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
>>>>>>> refs/remotes/origin/main
}
