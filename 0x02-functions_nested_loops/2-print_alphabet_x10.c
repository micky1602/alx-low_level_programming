#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 */
void print_alphabet_x10(void)
{
	char c, i;

	for  (i = 'a'; i <= 'z'; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
