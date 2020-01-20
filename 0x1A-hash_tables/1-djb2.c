#include "hash_tables.h"

/**
 * hash_djb2 - Algorithm of hash function.
 * @str: the key to hash
 *
 * Return: the hash.
 */
unsigned long hash(unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}
