/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:25:52 by fparola           #+#    #+#             */
/*   Updated: 2025/09/27 17:25:52 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int ft_handle_int(int value) {
  char *v_str;
  char *b_dec;

  b_dec = "0123456789";
  v_str = ft_itoab(value, b_dec);
  return (ft_putstr_fd(v_str, 1));
}

int ft_handle_unsigned(unsigned int value) {
  char *v_str;
  char *b_dec;

  b_dec = "0123456789";
  v_str = ft_itoab_uns(value, b_dec);
  return (ft_putstr_fd(v_str, 1));
}

int ft_handle_hex(unsigned int v, int upper) {
  char *b_hex;
  char *v_str;

  b_hex = "0123456789abcdef";
  if (upper)
    b_hex = "0123456789ABCDEF";
  v_str = ft_itoab_uns(v, b_hex);
  return (ft_putstr_fd(v_str, 1));
}

int ft_handle_ptr(size_t address) {
  char *b_hex;
  char *v_str;

  b_hex = "0123456789abcdef";
  v_str = ft_itoab_uns((size_t)address, b_hex);
  return (ft_putstr_fd("0x", 0) + ft_putstr_fd(v_str, 1));
}
