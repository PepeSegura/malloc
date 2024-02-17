#include  "malloc.h"

void	*realloc(void *ptr, size_t size)
{
	(void)ptr, (void)size;
	write(1, "REALLOC\n", 8);
	return (NULL);
}
