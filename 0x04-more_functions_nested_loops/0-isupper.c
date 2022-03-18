#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
char c, res;
res = toupper((unsigned char) c);

c = 'A';
printf("%c: %d\n", c, isalpha(c));
c = 'a';
printf("%c: %d\n", c, isupper(c));
return (0);
}