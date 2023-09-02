#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the programs
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
