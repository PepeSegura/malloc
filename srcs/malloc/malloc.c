#include  "malloc.h"

void	*malloc(size_t size)
{
	(void)size;
	write(1, "MALLOC\n", 7);
	return (NULL);
}
