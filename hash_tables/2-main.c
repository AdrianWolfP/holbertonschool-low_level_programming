#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	cahr *s;
	unsigned long int hash_table_array_size;

	hash_table_array_size = 1024;
	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n",
