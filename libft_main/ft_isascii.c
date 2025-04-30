/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:47 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 15:28:50 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

// #include <stdio.h> 
// #include <ctype.h>

// int main (void)
// {
// 	char c = 'A';
// 	char k = '0';
// 	printf ("%d %d\n", ft_isascii(c), isascii(c));
// 	printf("%d %d\n", ft_isascii(k), isascii(k));
// }
