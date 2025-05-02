/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlive <timlive@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:22:22 by alavrukh          #+#    #+#             */
/*   Updated: 2025/05/01 15:44:25 by timlive          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	count_words(const char	*str, char c);
static char	*fill_word(const char	*str, char c);
static void	*ft_free(char	**strs,	int count);

char	**ft_split(const char *s, char c)
{
	char			**res;
	int				j;
	int				res_len;

	res_len = count_words(s, c) + 1;
	j = 0;
	if (!s)
		return (NULL);
	res = malloc(res_len * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			res[j] = fill_word(s, c);
			if ((!res[j]))
				return (ft_free(res, res_len));
			j++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[j] = NULL;
	return (res);
}
// "  Hello   my   dear   world!  "
// "012345678912345678901234567890"
// res: [ptr1, ptr2, ptr3, ptr4, NULL]

static void	*ft_free(char **strs, int count)
{
	int			i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	count_words(const char *str, char c)
{
	int			count;
	int			is_in_word;

	is_in_word = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && is_in_word == 0)
		{
			count++;
			is_in_word = 1;
		}
		else if (*str == c)
			is_in_word = 0;
		str++;
	}
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "tripouille";
// 	char	c = 0;
// 	char	**result = ft_split(str, c);
// 	if (result)
// 	{
// 	for (int	i = 0; result[i] != NULL; i++)
// 	{
// 						printf("%s\n", result[i]);

// 	free(result[i]);
// 	}
// 	free(result);
// 	}
// 	return 0;
// }
