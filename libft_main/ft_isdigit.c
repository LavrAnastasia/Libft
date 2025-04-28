/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:38 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/16 16:31:40 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else 
		return (0);
}

#include <stdio.h> 
#include <ctype.h>

int main (void)
{
	char c = 'a';
	char k = '2';
	printf ("%d %d\n", ft_isdigit(c), isdigit(c));
	printf("%d %d\n", ft_isdigit(k), isdigit(k));	
}