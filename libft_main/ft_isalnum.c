/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:42 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/30 14:57:40 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
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
// 	printf ("%d %d\n", ft_isalnum(c), isalnum(c));
// 	printf("%d %d\n", ft_isalnum(k), isalnum(k));	
// }
