/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:23:24 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 17:13:48 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned const char	*str1;
	unsigned const char	*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i] || str1[i] == '\0')
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char str1 [10] = "Anastasia";
// 	char str2 [15] = "ananas";
// 	size_t n;
// 	n = 20;
// 	printf ("%d\n", ft_strncmp(str1, str2, n));
// 	printf ("%d\n", strncmp(str1, str2, n));
// }