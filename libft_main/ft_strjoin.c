/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:57:31 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 17:26:18 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t i;
	size_t j;
	char *result;

	i = 0;
	j = 0;

	if (!s1 || !s2)
		return (NULL);

	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return(NULL);

	while (s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
	
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
// #include <stdio.h>
// int main (void)
// {
// 	char str1 [] = "abra";
// 	char str2 [] = "cadabra";
// 	printf("%s", ft_strjoin(str1, str2));
// }