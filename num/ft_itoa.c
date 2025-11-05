/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:27:12 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 11:30:30 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_digits(n, 10);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	if (n == 0)
		str[0] = '0';
	while (nb)
	{
		--len;
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
