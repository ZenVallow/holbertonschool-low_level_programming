#include "main.h"
/**
 * _isalpha - add _isalpha return printer.
 *
 *@c: a,z,A and Z
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{

		return (1);

	}
	else if (c >= 'A' && c <= 'Z')
	{

		return (1);

	}
	else
	{
		return (0);
	}
}
