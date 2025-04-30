/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:59 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 17:33:44 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Fills the first n bytes of the memory area pointed to by s 
//with the constant byte c.
// Returns a pointer to the memory area s

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	char a [50];
// 	int b;
// 	size_t n;
// 	b = '5';
// 	n = 10;
// 	a[n] = '\0';
// 	printf ("%s", (char *)ft_memset(a, b, n));
// }
