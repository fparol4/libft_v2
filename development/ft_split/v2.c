
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

#include "../libft.h"

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
  int word_count = 0;
  int char_count = f_countc(s, c);
  char **split_buffer = (char **)malloc(char_count * sizeof(char *));
  while (s[ix]) {
    int next_ix = ix + 1;
    if (s[next_ix] == c || s[next_ix] == 0) {
      char *word_buffer = (char *)malloc(next_ix * sizeof(char));
      ft_strcpy(word_buffer, s, next_ix);
      s = &(s[next_ix + 1]);
      split_buffer[word_count] = word_buffer;
      ix = 0;
      word_count += 1;
    } else {
      ++ix;
    }
  }
  return split_buffer;
}

void __test__() {
  // TEST #1
  char **R1 = ft_split("LOVE,LOVE,LOVE", ',');
  printf("<< R1 => %s;%s;%s == 'LOVE;LOVE;LOVE >>\n", R1[0], R1[1], R1[2]);
}

int main() { __test__(); }
