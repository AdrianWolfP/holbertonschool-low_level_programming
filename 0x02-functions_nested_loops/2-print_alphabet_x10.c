#include "main.h"
/**
* main - Enrty point
* Return: 0
*/
void print_alphabet_x10(void)
{
int i;
int c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
}
