/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:47:27 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/21 14:53:00 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;
	i = 0;
	
	len = ft_strlen(src);

	if (size == 0)
	return (len);

	while(i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return len;
}

#include <stdio.h>
#include <string.h>

int main (void)
{
	char dst [50];
	char src [50] = "qwerty";
	size_t n = 10;
	
	printf("%zu", ft_strlcpy(dst, src, n));
}