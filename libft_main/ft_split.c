/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:22:22 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/28 13:28:35 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_word(const char *str, char c);
static char *fill_word(const char *str, int start, int end);
static void *ft_free(char **strs,  int count);

char **ft_split (const char *s, char c)
{
	char **res;
	size_t i;
	int j;
	int is_word;

	i = 0;
	j = 0;
	is_word = -1;

	res = (char *)malloc((count_word(s, c) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && is_word < 0)
		is_word = i;
		else if ((s[i] == c || i== ft_strlen(s)) && is_word >= 0)
		{
			res[j] = fill_word (s, is_word, i);
			if ((!res[j]))
				return (ft_free(res, j));
			is_word = -1;
			j++;
		}
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void *ft_free(char **strs,  int count)
{
	int i;
	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char *fill_word(const char *str, int start, int end)
{
	char *word;
	int i;

	i = 0;
	word = malloc ((end - start + 1)* sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int count_word(const char *str, char c)
{
	int count;
	int is_in_word;

	i = 0;
	count = 0;

	while (*str)
	{
		if(*str != c && is_in_word == 0)
		{
			count++;
			is_in_word = 1;
		}
		else if (*str == c)
			is_in_word = 0;
			str++;
	}
	return(count);
}
