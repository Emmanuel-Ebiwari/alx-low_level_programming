#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using
 * malloc and free
 *
 * @ptr: pointer
 * @old_size: integer
 * @new_size: integer
 *
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	  
	return (ptr);
}
