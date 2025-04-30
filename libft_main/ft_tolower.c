/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:16:15 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 17:27:49 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	int c = 'A';
// 	int result;
// 	result = ft_tolower(c);
// 	printf("%d", result);
// 	//toupper(c);
// 	//printf("%d", c);
// }