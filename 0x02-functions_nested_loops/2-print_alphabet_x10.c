#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 tiems
 */
void print_alphabet_x10(void)
{

	int ten;
	char ba;

	for (ten = 1; ten <= 10; ten++)
	{
		for (ba = 'a'; ba <= 'z'; ba++)
			_putchar(ba);
		_putchar('\n');
	}
}
