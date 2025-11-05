/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:42:29 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 11:44:38 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static	void	ft_putnbr_rec(long n, int fd)
{
	char	c;

	if (n >= 10)
		ft_putnbr_rec(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

size_t	ft_putnbr_fd(int n, int fd)
{
    int     s;
    long	nb;

	nb = n;
	s = ft_digits(n, 10);
	if (nb < 0)
	{
		write(fd, "-", 1);
		s += 1;
		nb = -nb;
	}
	ft_putnbr_rec(nb, fd);
	return (s);
}
