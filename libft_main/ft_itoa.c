/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:17:08 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 15:37:53 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	long long	num;
	size_t		len;
	char		*str;

	num = (long long)n;
	len = 0;
	len = ft_numlen(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	int n;
// 	n = 12234;
// 	printf("%s",ft_itoa( n));
// }
