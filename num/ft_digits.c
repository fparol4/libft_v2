#include <stddef.h>

size_t	ft_digits(size_t v, int size)
{
	size_t	digits;

	if (size == 0)
		return (0);
	if (v == 0)
		return (1);
	digits = 0;
	while (v != 0)
	{
		v = v / size;
		digits++;
	}
	return (digits);
}
