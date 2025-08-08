/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:39:30 by fparola           #+#    #+#             */
/*   Updated: 2025/08/07 21:39:30 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int f_countc(const char *s, const char c) {
  int cx = 0;
  while (*s) {
    if (*s == c)
      ++cx;
    ++s;
  }
  return cx;
}

char *ft_strcpy(char *dest, const char *src, size_t len) {
  int ix = 0;
  while (src[ix] && ix < len) {
    dest[ix] = src[ix];
    ++ix;

    dest[ix] = '\0';
  }
  return dest;
}

char **ft_split(char const *s, char c) {
  int ix = 0;
  int cx = 0;
  int jx = 0;
  int size = f_countc(s, c) + 1;
  char **buff = (char **)malloc(ix * sizeof(char *));

  printf("ix: %d, cx: %d, jx: %d, size: %d \n", ix, cx, jx, size);

  if (!buff)
    return NULL;

  while (s[ix + cx]) {
    printf("ix: %d, cx: %d s: %c\n", ix, cx, s[ix + cx]);
    if (s[ix + cx] == c) {
      char *b_split = (char *)malloc(ix * sizeof(char));
      if (!b_split)
        return NULL;
      buff[jx++] = b_split;
      ft_strcpy(b_split, &(s[cx]), ix);
      cx += ix + 1;
      ix = 0;
    }
    ++ix;
  }
  return buff;
}

void __test__() {
  // TEST #1
  char **R1 = ft_split("LOVE,LOVE,LOVE", ',');
  printf("<< R1 => %s%s%s == 'LOVE; LOVE; LOVE >>\n", R1[0], R1[1], R1[2]);
}

int main() { __test__(); }
