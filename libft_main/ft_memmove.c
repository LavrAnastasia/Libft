/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:25:25 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/21 11:31:18 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)

{
	size_t i;
	i = 0;
	unsigned char *d;
	d = (unsigned char *) dest;

	unsigned const char *s;
	s = (unsigned const char *) src;

	if (s == d || n == 0)
	return (0);

	if (s < d) 
	{
		i = n;
		while (i -- > 0)
		d[i] = s[i]; 
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);


}

#include <stdio.h>
#include <string.h>

int main (void)
{
	char dest1 [50] = "abcd";
	char dest2 [50] = "abcd";
	char src [50] = "def";
	size_t n;
	n = 3;
	ft_memmove(dest1, src, n);
	printf ("%s\n", dest1);
	
	memmove (dest2, src, n);
	printf ("%s\n", dest2);
}