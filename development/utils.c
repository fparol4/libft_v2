int ft_strlen(char const *s) {
  int l = 0;
  while (s[l])
    ++l;
  return l;
}
