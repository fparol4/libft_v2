#include "libft.h"
#if __TESTING__
void __test__()
{
	char buff_2[] = "ABCDEF";
	char buff_1[] = "KLM";
	ft_memmove(buff_1 + 2, buff_2, 3);
	printf("RESULT -> %s;%s", buff_1, buff_2);
}
int	main (){ __test__(); }
#endif
