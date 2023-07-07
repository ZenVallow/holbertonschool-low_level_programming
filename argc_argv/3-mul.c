#include<stdio.h>
#include<stdlib.h>

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

	if (argc == 3)
	{
		int mul1 = atoi(argv[1]);
		int mul2 = atoi(argv[2]);
		int result = mul1 * mul2;

		printf("%d\n", result);

	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
