/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:40:28 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 17:28:52 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char str1 [30] = "abcdf";
// 	char str2 [30];
// 	size_t k;
// 	k = 11;
// 	ft_memcpy(str1, str2, k);
// 	printf("%.9s\n", str2);
// 	memcpy(str1, str2, k);
// 	printf("%.9s\n", str2);	
// }
