/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:40:41 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 12:02:25 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char str1 [50] = "HELLO00";
// 	char str2 [50] = "anastasia";
// 	char str3 [50] = "havik";
//  	ft_bzero (str1, 5);
// 	ft_bzero (str2, 5);
// 	bzero (str3, 5 );
// 	printf("%.3s\n", str1);
// 	printf("%.3s\n", str2);
// 	printf("%.3s\n", str3);
// }
