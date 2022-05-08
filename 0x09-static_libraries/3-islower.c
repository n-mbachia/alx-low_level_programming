#include "main.h"

/**
 * _islower checksforlowercaseletters
 * @c: character ASSCII format
 * Retur: 1 iflowercase else returns 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
