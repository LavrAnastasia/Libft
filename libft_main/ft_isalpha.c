/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:33 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 15:05:46 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h> 
// #include <ctype.h>

// int main (void)
// {
// 	char c = 'a';
// 	char k = '2';
// 	printf ("%d %d\n", ft_isalpha(c), isalpha (c));
// 	printf("%d %d\n", ft_isalpha(k), isalpha (k));	
// }
