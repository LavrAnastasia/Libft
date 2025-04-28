/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:14:03 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/26 12:30:53 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc (size_t nmemb, size_t size)
{
    unsigned char *tmp;
    size_t i;    

    tmp = malloc(nmemb * size);    
    if (!tmp)
        return (0);
    i = 0;
    while (i < nmemb * size)
    {
        tmp[i] = 0;
        i++;
    }
    return (void*)tmp;
}

#include <stdio.h>

int main ()
{
    printf("%s", (char *)ft_calloc(50, 1));
	printf("%s", (char *)calloc(50,1));
}
