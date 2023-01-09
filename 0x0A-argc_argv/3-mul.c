#include <stdio.h>
#include <stdli.h>
/**
 * main - multiplies two numbers
 * @argv: int
 * @argc: int
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int v, c;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	v = atoi(argc[2]);

	printf("%d\n", c * v);
	return (0);
}
