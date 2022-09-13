#include <stdio.h>
/**
 * main-Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp[26] = "0123456789abcdef";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
