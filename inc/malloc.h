#ifndef MALLOC_H
# define MALLOC_H

/* Malloc */
# include <stdlib.h>

/* Needed for proyect */
# include <unistd.h>
# include <sys/mman.h>
# include <sys/resource.h>

/* Bonus: make malloc thread_safe */
# include <pthread.h>

/* Allowed Functions

void	*mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
int		munmap(void *addr, size_t len);
int		getpagesize(void);
int		getrlimit(int resource, struct rlimit *rlp);
*/

void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);

#endif
