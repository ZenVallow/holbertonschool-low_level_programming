#include<stdio.h>

/**
 * main - check the code
 *
 *@argc: use for check the number of parameter
 *@argv: use for print the strings
 *
 * Return - 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return 0;
}
