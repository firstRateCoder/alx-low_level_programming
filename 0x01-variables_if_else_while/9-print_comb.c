#include <stdio.h>

/**
 * main - entry file
 * description: print number separated by comma
 * Return: 0 Always success
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar (' ');
		}
	}

	putchar('\n');
	return (0);
}
