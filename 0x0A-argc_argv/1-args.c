#include <stdio.h>

/**
 * main - prints the number of rguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array tha contains the program command line arguments.
 * Return: 0 - sucess.
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc -1);
	return (0);
}
