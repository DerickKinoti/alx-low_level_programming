#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mul of 2 ints
 * @argc: number of args
 * @argv: array of pointers
 * Return: if receives arg, 0 of not -1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
