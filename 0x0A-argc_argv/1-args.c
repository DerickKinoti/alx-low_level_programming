#include <stdio.h>

/**
 * main - prints number of args
 * @argc: number of args
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
