/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:12:01 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/21 17:31:14 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
	int c = 'a';
	int result;
	result = ft_toupper(c);
	printf("%d", result);
	//toupper(c);
	//printf("%d", c);
}