/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:23:24 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/23 14:43:17 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	const unsigned char *str1;
	str1 = (const unsigned  char *)s1;
	
	const unsigned char *str2;
	str2 = (const unsigned char *)s2;

	while (str1[i] != '\0' && str1[i]== str2[i])
	{
		i++;	
	}
	return (str1[i] - str2[i]);
}

#include <stdio.h>
#include <string.h>

int main (void)
{
	char str1 [10] = "Anastasia";
	char str2 [15] = "ananas";
	size_t n;
	n = 20;
	printf ("%d\n", ft_strncmp(str1, str2, n));
	printf ("%d\n", strncmp(str1, str2, n));
}