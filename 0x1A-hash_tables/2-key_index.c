#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  * @key: key to be indexed
  * @size: size of the array
  * Return: index of the key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);

}
