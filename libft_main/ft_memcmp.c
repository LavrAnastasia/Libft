/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:26:10 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/18 15:45:53 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = 0;

	unsigned const char *str1;
	str1 = (unsigned const char *)s1;
	unsigned const char *str2; 
	str2 = (unsigned const char *)s2;

	while (str1[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	} 
	return (str1[i] - str2[i]);
}
#include <stdio.h>
#include <string.h>

int main (void)
{
	char string1 [50] = "abcd";
	char string2 [50] = "bnm";

	size_t n = 5;
	
	printf("%d\n", ft_memcmp (string1, string2, n));
	printf("%d\n", memcmp (string1, string2, n));
}