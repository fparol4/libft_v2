#include <limits.h>

int	ft_abs(int v)
{
	if (v == INT_MIN)
		return (-1);
	if (v < 0)
		return (-v);
	return (v);
}

int	ft_signal(int v)
{
	if (v < 0)
		return (-1);
	return (1);
}
