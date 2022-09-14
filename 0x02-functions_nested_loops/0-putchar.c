#include "main.h"
#include "_putchar.c"
/**
 * main - prints putchar
 *
 * Return: 0 (success)
 *
 */
int show(void);
int main(char c)
{
	int str [] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, s;

	s = sizeof(str) / sizeof(int);
	for (count = 0; count < s; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
