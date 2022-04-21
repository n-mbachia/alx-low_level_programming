#include "main.h"

/**
*swa_int -swap variable values
* @a: pointer 1
* @b: pointer 2
* Return: void
*/

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a - *b;
	*a = *b - *a;	
}
