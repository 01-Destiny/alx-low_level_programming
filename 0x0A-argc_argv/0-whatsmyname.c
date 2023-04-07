#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the program name
 *@argc: captures the number of commands in the command line
 *@argv: captures the strings in the command line
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
