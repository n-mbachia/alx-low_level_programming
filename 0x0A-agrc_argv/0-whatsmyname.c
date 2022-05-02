#include <stdio.h>
/**
 * main - prints its ame, followed by new line.
 * @argc: number of command line arguments.
 * @agrv: arrays that contain the program command line argument.
 * Return: 0 - success. 
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", arg[0]);
	return (0);
}
