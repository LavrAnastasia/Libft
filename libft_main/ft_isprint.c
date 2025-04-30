/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:52 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 15:31:44 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main (void)
// {
// 	char c = 'a';
// 	char b = '&';

// 	printf("%d %d\n", ft_isprint(c), isprint(c));
// 	printf("%d %d\n", ft_isprint(b), isprint(b));
// }
