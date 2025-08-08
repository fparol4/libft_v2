/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:37:55 by fparola           #+#    #+#             */
/*   Updated: 2025/08/07 20:37:55 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
  int a_len = ft_strlen(s1);
  int b_len = ft_strlen(s2);
  int c_len = a_len + b_len;
  char *buffer = (char *)malloc(c_len * sizeof(char));
  if (!buffer)
    return NULL;
  int ix = 0;
  while (ix < c_len) {
    if (ix < a_len)
      buffer[ix] = s1[ix];
    else
      buffer[ix] = s2[ix - a_len];
    ++ix;
  }
  return buffer;
}

void __test__() {
  // 1. RETURN "HNA"
  char *R1 = ft_strjoin("HARE", "KRISHNA");
  printf("<< R1 => %s == 'HAREKRISHNA' >>\n", R1);
}

int main() { __test__(); }
