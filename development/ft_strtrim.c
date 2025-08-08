/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:54:12 by fparola           #+#    #+#             */
/*   Updated: 2025/08/07 21:03:43 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int f_strfind(char const *s, char c) {
  while (*s) {
    if (*s == c)
      return 1;
    ++s;
  }
  return 0;
}

int f_trimlen(char const *s, char const *set) {
  int lx = 0;
  while (*s) {
    if (!f_strfind(set, *s))
      ++lx;
    ++s;
  }
  return lx;
}

char *ft_strtrim(char const *s1, char const *set) {
  int t_len = f_trimlen(s1, set);
  char *buffer = (char *)malloc(t_len * sizeof(char));
  if (!buffer)
    return NULL;
  int ix = 0;
  while (*s1) {
    if (!f_strfind(set, *s1))
      buffer[ix++] = *s1;
    ++s1;
  }
  return buffer;
}

void __test__() {
  // TEST #1
  char *R1 = ft_strtrim("77LOVE77", "-\\90");
  printf("<< R1 => %s == '77LOVE77' >>\n", R1);

  // TEST #2
  char *R2 = ft_strtrim("999977LOVE7700000", "-\\90");
  printf("<< R2 => %s == '77LOVE77' >>\n", R2);

  // TEST #3
  char *R3 = ft_strtrim("999900000", "-\\90");
  printf("<< R3 => %s == 'empty' >>\n", R3);
}

int main() { __test__(); }
