/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:03:04 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 17:25:26 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	 unsigned char chr;
	 chr = (unsigned char)c;

	 const unsigned char *str;
	 str = (const unsigned char *)s;

	 while (*str)
	 {
		if (*str == chr) 
			return (char *)str;
		str++;
	 }
	if (*str == chr)
	 	return (char *)str;
	return NULL;
}
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char str [10] = "abcd";
// 	char c;
// 	c = 'a';
// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
// }
