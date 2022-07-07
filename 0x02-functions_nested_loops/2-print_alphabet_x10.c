#include "main.h"
/**
 * print_alphabet_x10-prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int k;
	int i;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
