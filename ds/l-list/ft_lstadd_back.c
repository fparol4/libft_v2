/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardozo <fcardozo@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:13:15 by fcardozo         #+#    #+#             */
/*   Updated: 2026/03/10 17:13:15 by fcardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	ft_lstlast(*lst)->next = node;
}
