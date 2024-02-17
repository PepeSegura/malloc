#include  "malloc.h"

void	free(void *ptr)
{
	(void)ptr;
	write(1, "FREE\n", 5);
}
