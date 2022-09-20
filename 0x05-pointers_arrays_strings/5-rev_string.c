#include "main.h"

/**
 * rev_string -> reversing a string
 * @s: parameter s
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char z;


	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		z = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = z;
	}
}
