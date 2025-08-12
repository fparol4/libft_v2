#include "../libft.h"
#include <stdlib.h>

static char *ft_strcpy(char *dest, const char *src, size_t len) {
  int ix = 0;
  while (src[ix] && ix < len) {
    dest[ix] = src[ix];
    ++ix;
    dest[ix] = '\0';
  }
  return dest;
}

static int f_wcount(const char *s, char c) {
  int count = 0, in_word = 0;
  while (*s) {
    if (*s != c && !in_word) {
      in_word = 1;
      count++;
    } else if (*s == c) {
      in_word = 0;
    }
    s++;
  }
  return count;
}

char **ft_split(const char *s, char c) {
  if (!s)
    return NULL;
  int words = f_wcount(s, c);
  char **s_buffer = malloc((words + 1) * sizeof(char *));
  if (!s_buffer)
    return NULL;
  int ix = 0;
  while (*s) {
    while (*s == c)
      s++;
    if (*s) {
      const char *start = s;
      while (*s && *s != c)
        s++;
      size_t w_len = s - start;
      s_buffer[ix] = malloc(w_len + 1);
      if (!s_buffer[ix])
        return NULL;
      ft_strcpy(s_buffer[ix], start, w_len);
      ++ix;
    }
  }
  s_buffer[ix] = NULL;
  return s_buffer;
}

void __test__() {
  // TEST #1
  char **R1 = ft_split("LOVE,LOVE,LOVE", ',');
  printf("<< R1 => %s;%s;%s == 'LOVE;LOVE;LOVE >>\n", R1[0], R1[1], R1[2]);
}

int main() { __test__(); }
