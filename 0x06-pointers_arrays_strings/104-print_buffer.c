#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
int j, k, l;

if (size <= 0)
printf("\n");
else
{
for (j = 0; j < size; j += 10)
{
printf("%.8x:\n", j);
for (k = j; k < j + 10; k++)
{
if (k % 2 == 0)
printf(" \n");
if (k < size)
printf("%.2x\n", *(b + k));
else
printf(" \n");
}
printf(" \n");
for (l = j; l < j + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c\n", '.');
else
printf("%c\n", *(b + l));
}
printf("\n");
}
}
}
