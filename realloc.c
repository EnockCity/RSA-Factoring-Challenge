#include <stdlib.h>
#include <string.h>
#include "factor.h"

/**
 * _realloc - function that reallocates memory
 * @ptr: the memory tobe allocated
 * @new_size: the size of the newly allocated memory
 * Return: returns the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int new_size)
{
	void *mem;

	if (!ptr)
	{
		mem = malloc(new_size);
		if (!mem)
			return (NULL);
		return (mem);
	}
	mem = malloc(new_size);
	if (!mem)
		return (NULL);
	memcpy(mem, ptr, new_size);
	return (mem);
}
int main(int argc, char **argv)
{
	return (0);
}
int custom_getline(char **lineptr, size_t *n, FILE *stream)
{

}
