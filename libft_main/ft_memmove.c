/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:25:25 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 17:30:08 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
////function copies n bytes from memory area src to memory area dest.
//The memory areas may overlap

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char dest1 [50] = "abcd";
// 	char dest2 [50] = "abcd";
// 	char src [50] = "def";
// 	size_t n;
// 	n = 3;
// 	ft_memmove(dest1, src, n);
// 	printf ("%s\n", dest1);
// 	memmove (dest2, src, n);
// 	printf ("%s\n", dest2);
// }
