/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:59 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/17 15:21:21 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
	
unsigned char *str;
str = (unsigned char *)s; 
size_t i;
i = 0;
 
while (i < n)
{
	str[i] = (unsigned char)c; 
	i++;
}
return(s);

}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char a [50];
	int b;
	size_t n;

	b = '5';
	n = 10;
	a[n] = '\0';

	printf ("%s", (char *)memset(a, b, n));
}
*/