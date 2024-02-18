/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:50:38 by psegura-          #+#    #+#             */
/*   Updated: 2024/02/18 16:05:55 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include  "inc/malloc.h"

int main(void)
{
	printf("TOP\n");
	char *str = malloc(4);
	(void)str;
	printf("BOT\n");
}
