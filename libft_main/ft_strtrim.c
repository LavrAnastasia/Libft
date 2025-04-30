/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:13:53 by alavrukh          #+#    #+#             */
/*   Updated: 2025/04/29 17:27:30 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *result(const char *s1, size_t start, size_t end);
static int to_trim (const char*set, char c);

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));

	while (to_trim (set, s1[i]))
	i++;
	while (to_trim (set, s1[j]))
	j--;
	return (result(s1, i, j - i + 1));
}

static char *result(const char *s1, size_t start, size_t end)
{
	char *str;
	size_t i;

	if (end <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)malloc((end +1) * sizeof(char));
	if (!str)
		return(NULL);
	i = 0;
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
static int to_trim(const char*set, char c)
{
	int i;
	i = 0;

	while (set[i])
	{
		if (c ==  set[i])
			return (1);
		i++;
	}
	return(0);
}
// int main (void)
// {
// 	char str1 [] = "   Anastasia   ";
// 	char str2 [] = "   ";
// 	printf("%s",ft_strtrim(str1, str2));
// }
