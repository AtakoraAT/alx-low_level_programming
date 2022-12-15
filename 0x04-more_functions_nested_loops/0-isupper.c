#include "main.h"

#include <stdio.h>

/**
 * int_isupper(int c) - entry point which checks the code
 *
 * @c - is the variable
 * Return: always 0 (success)
 */

int _isupper(int c)

{
	char c;

	c = 'A';

		_putchar("%c : %d\n", c, _isupper(c));
	c = 'a';
		_putchar("%c : %d\n", c, _isupper(c));
	return (0);

}
