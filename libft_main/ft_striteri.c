/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:50:24 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 17:26:02 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void ft_iteri (unsigned int i, char *str)
// {
// 	if (i % 2 == 0)
// 	{
// 		(*str -= 32);
// 	}
// }

// int main (void)
// {
// 	char str [] = "abcd";
// 	ft_striteri(str, ft_iteri);
// 	printf("%s", str);
// }
