#include "main.h"

/**
 * rev_string - check the code
 *
 *@s: same
 *
 * Return: void.
 */

void rev_string(char *s)
{
	char *rev = s;

		while (*rev != '\0')
		{
			rev++;
		}
	rev--;
	while (rev >= s)
	{
		char box = *s;
		*s = *rev;
		*rev = box;
		rev--;
		s++;
	}
}
