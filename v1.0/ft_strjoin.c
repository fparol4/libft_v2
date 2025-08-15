/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:58:22 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 11:01:03 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	l_1;
	size_t	l_2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	l_1 = ft_strlen(s1);
	l_2 = ft_strlen(s2);
	join = (char *) malloc (l_1 + l_2 + 1);
	if (!join)
		return (0);
	i = 0;
	while (i < l_1)
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < l_2)
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
