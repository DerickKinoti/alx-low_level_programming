#include <stdio.h>

/**
 * main - prints args
 * @argc: number of args
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
