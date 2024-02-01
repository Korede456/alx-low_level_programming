#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: the key of the hash item
 * @size: size of the array
 *
 * Return: the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
