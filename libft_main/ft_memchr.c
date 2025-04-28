/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:44:23 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/23 17:12:43 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	str = (const unsigned char *)s;

	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void*)str);
		str++;
		n--;
	}
	return(NULL);
}
#include <stdio.h>
#include <string.h>

int main (void)
{
	char str [10] = "12345";
	char c; 
	c = '3';
	size_t n;
	n = 50;
	printf("%s", (unsigned char*)ft_memchr(str, c, n));
}