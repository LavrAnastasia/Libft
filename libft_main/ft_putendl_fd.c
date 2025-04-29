/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:36:56 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 15:58:12 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// the same way like ft_putstr_fd, it just adds a newline character at the end

void ft_putendl_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

int main (void)
{
	ft_putendl_fd("spring", 1);
	ft_putendl_fd("springg", 2);
}