#include "hash_tables.h"

/**
 * hash_djb2 - use of the djb2 algorithm that will be implementated
 *@str: string input
Return: 1, otherwise 0
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
