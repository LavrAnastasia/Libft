/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:04:29 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/26 15:50:25 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)

{
	char *str;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);

	if (start > ft_strlen(s))
		return (ft_strdup(""));

	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);	
}

#include <stdio.h>

int main (void)
{
	char str [] = "Hello";

	char *result;
	result = ft_substr(str, 3, 2);
	printf("%s\n", result);
}