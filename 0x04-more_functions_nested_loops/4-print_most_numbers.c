#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Escape 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
int n = '0';
for (; n <= '9'; n++)
{
if (n != '2' && n != '4')
putchar(n);
}
putchar('\n');
}