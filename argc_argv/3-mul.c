#include<stdio.h>

/**
 * main - check the code
 *
 *@argc: use for check the number of parameter
 *@argv: use for make the multiplication of integer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul1 = 0;
	int mul2 = 0;

	if (argc == 3)
	{
		mul1 = *argv[1];
		mul2 = *argv[2];
		printf("%d\n", mul1 * mul2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
