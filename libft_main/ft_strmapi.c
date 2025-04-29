/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:01:41 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 14:12:05 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//What ft_strmapi does is apply the function f 
// to every character of the string s.

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *smodified;
	size_t i;

	if(!s || !f)
		return (NULL);
	i = 0;
	smodified = malloc(ft_strlen(s) + 1);
	if(!smodified)
		return (NULL);
	while(s[i])
	{
		smodified[i] = f(i, s[i]);
		i++;
	}
	smodified[i] = '\0';
	return(smodified);
}
#include <stdio.h>
char ft_mapi(unsigned int i, char c)
	{
		if(i % 2 == 0)
		{
			return(c - 32);
		}
		return(c);
	}
int main (void)
{
	char *strmapi;
	strmapi = "abcdef";
	printf("%s", ft_strmapi(strmapi, ft_mapi));
}

