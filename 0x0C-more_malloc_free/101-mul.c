#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isDigit - entry point
* @s:char
* Return:int
*/
int isDigit(char *s);
int isDigit(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
continue;
else
return (0);
}
return (1);
}
/**
 * infinite_mul - multiply two numbers
 * @n1:char
 * @n2:char.
 * @result:char
 * Return:char.
 */
char *infinite_mul(char *n1, char *n2, char *result);
char *infinite_mul(char *n1, char *n2, char *result)
{
int i, j;
for (i = strlen(n1) - 1; i >= 0; i--)
{
for (j = strlen(n2) - 1; j >= 0; j--)
{
result[i + j + 1] += (n2[j] - '0') * (n1[i] - '0');
}
}
for (i = strlen(n1) + strlen(n2); i >= 0; i--)
{
if (result[i] >= 10)
{
result[i - 1] += result[i] / 10;
result[i] %= 10;
}
}
return (result);
}
/**
 * main - entry point
 * @argc:int
 * @argv:char
 * Return:int
 */
int main(int argc, char *argv[])
{
char *mul, *r;
int x, j;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
x = isDigit(argv[1]);
j = isDigit(argv[2]);
if (j == 0 || x == 0)
{
printf("Error\n");
exit(98);
}
r = malloc(strlen(argv[1]) + strlen(argv[2]));
mul = malloc(strlen(argv[1]) + strlen(argv[2]));
mul = infinite_mul(argv[1], argv[2], r);
printf("%s\n", mul);
free(r);
free(mul);
return (0);
}
