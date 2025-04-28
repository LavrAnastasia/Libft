/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:22:46 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/24 15:12:28 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)

{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result *10 + (nptr [i] - '0');
		i++;
	}
	return (result * sign);
		
}

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char number[] = "5677qweqwe41235";
	printf("%i", ft_atoi(number));
	printf("%i", atoi(number));
}