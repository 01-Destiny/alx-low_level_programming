#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int a, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < nbytes; a++)
	{
		printf("%02x", opc[a] & 0xFF);
		if (a != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
