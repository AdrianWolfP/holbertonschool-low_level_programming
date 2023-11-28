#include "hash_tables.h"

/**
 * key_index - prints the index of a key in a hash table
 * @key: key that gets the index
 * @size: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
