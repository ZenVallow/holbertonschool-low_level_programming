#include"main.h"

/**
 * _memset - check the code
 *
 *@s: string.
 *
 *@b: bytes.
 *
 *@n: number.
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	while (n > 0)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
