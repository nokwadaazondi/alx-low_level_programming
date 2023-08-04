#include <stdio.h>
/**
 * main - prints the number of aruments passed into it.
 * @argc: number of command line argument.
 * @argv: array that contains the line program command lie arg.
 * Return: 0 (success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
