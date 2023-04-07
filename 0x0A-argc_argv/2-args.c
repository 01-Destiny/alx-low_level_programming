#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument content
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
