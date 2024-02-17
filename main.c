#include  "inc/malloc.h"

int main(void)
{
	printf("TOP\n");
	char *str = malloc(4);
	(void)str;
	printf("BOT\n");
}
