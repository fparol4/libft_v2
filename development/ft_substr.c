/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:46:53 by fparola           #+#    #+#             */
/*   Updated: 2025/08/07 19:46:53 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
  RULES
  - NULL if start >= len(s)
  - NULL if len == 0
  - NULL if len(s) == 0
  - NULL if allocation fail
*/

char *ft_substr(char const *s, unsigned int start, size_t len) {
  int ix;
  int s_len;
  char *buff;

  s_len = ft_strlen(s);
  if (s_len == 0 || len == 0 || start >= s_len)
    return NULL;
  buff = (char *)malloc(len * sizeof(char));
  if (!buff)
    return NULL;
  ix = 0;
  while (ix < len) {
    buff[ix] = s[start + ix];
    ++ix;
  }
  return buff;
}

void __test__() {
  // 1. RETURN "HNA"
  char *R1 = ft_substr("KRISHNA", 4, 3);
  printf("<< R1 => %s == 'HNA' >>\n", R1);

  // 2. RETURN "NULL" if s_len == 0
  char *R2 = ft_substr("", 4, 3);
  printf("<< R2 => %s == 'NULL' >>\n", R2);
}

int main() { __test__(); }
