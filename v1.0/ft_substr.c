/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:55:19 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 10:58:07 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int s_len = ft_strlen(s + start);
	char *sp = (char *) malloc ((s_len + 1)* sizeof(char));
	if (!sp)
		return 0;
	if (start >= s_len)
		return (0);
	unsigned int i = 0;
	while (i < s_len && i < len)
	{
		sp[i] = s[i + start];
		i++;
	}
	sp[i] = 0;
	return sp;
}

// void	__test__()
// {
// 	char *a = "ABCD";
// 	char *b = ft_substr(a, 2, 0); 
// 	printf("R: %s", b);
// }
//
// int	main() { __test__(); }

