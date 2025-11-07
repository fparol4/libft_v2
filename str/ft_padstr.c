/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:57:45 by fparola           #+#    #+#             */
/*   Updated: 2025/11/07 17:57:45 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "../libft.h"

char *ft_padstart(char *str, int max_size, char placeholder) {
  int i;
  int len;
  int diff;

  len = ft_strlen(str);
  if (len >= max_size)
    return str;

  diff = max_size - len;
  char pad[diff];
  i = 0;
  while (i < diff)
    pad[i++] = placeholder;
  char *str_wpad = ft_calloc(max_size + 1, sizeof(len));
  ft_memcpy(str_wpad, pad, diff);
  ft_memcpy(str_wpad + diff, str, len);
  return str_wpad;
}

int main(int argc, char *argv[])
{
    char *x0 = ft_padstart("1001", 8, '0');
    printf("x0: %s\n", x0);
    return 0;
}
