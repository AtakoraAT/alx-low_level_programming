#include <stdio.h>
/**
 * main -entry point 
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + 'a');
		if (a < 99) 
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


