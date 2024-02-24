/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:50:38 by psegura-          #+#    #+#             */
/*   Updated: 2024/02/24 15:27:22 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include  "inc/malloc.h"

void	call_to_getrlimit(int flag, char *str)
{
	struct rlimit limits;

    if (getrlimit(flag, &limits) == 0)
        printf("%s:\t [%llu]\n", str, (unsigned long long)limits.rlim_cur);
    else
        printf("%s:\t Unable to get limit\n", str);
}

void	print_rlimit_cur(void)
{
	call_to_getrlimit(RLIMIT_CORE,	 "RLIMIT_CORE");
	call_to_getrlimit(RLIMIT_CPU,	 "RLIMIT_CPU");
	call_to_getrlimit(RLIMIT_DATA,	 "RLIMIT_DATA");
	call_to_getrlimit(RLIMIT_FSIZE,	 "RLIMIT_FSIZE");
	call_to_getrlimit(RLIMIT_MEMLOCK,"RLIMIT_MEMLOCK");
	call_to_getrlimit(RLIMIT_NOFILE, "RLIMIT_NOFILE");
	call_to_getrlimit(RLIMIT_NPROC,	 "RLIMIT_NPROC");
	call_to_getrlimit(RLIMIT_RSS,	 "RLIMIT_RSS");
	call_to_getrlimit(RLIMIT_STACK,	 "RLIMIT_STACK");
}

int main(void)
{
	printf("TOP\n");
	char *str = malloc(4);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	printf("[%s]\n", str);
	(void)str;
	print_rlimit_cur();
	// printf("pages_size:\t [%d]\n", getpagesize()); //4096
	
	printf("BOT\n");
}
