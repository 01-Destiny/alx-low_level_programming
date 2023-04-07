#include <stdio.h>

/**
 * main - main function
 *
 * @argc: argument count
 *
 * @argv: argument content
 *
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
