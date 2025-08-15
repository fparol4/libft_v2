/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:19:05 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 11:25:44 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*w_dup(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (0);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	wc;

	if (!s)
		return (0);
	wc = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!split)
		return (0);
	i = 0;
	k = 0;
	while (s[i] && k < wc)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			split[k++] = w_dup(s, j, i);
	}
	split[k] = 0;
	return (split);
}
