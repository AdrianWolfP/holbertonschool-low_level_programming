/**
*main - Entry point
*Return: Always 0
*/
#include <stdio.h>

int main(void)
{
char c;
char C;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (C = 'A'; C <= 'Z'; C++)
{
	putchar(C);
}
	putchar('\n');
	return (0);
}
