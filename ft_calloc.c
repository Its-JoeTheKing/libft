#include "libft.h"

void	*ft_calloc(int n, int size)
{
	void	*res;

	res = (void *)malloc(n * size);
	if (!res)
		return (0);
	ft_bzero(res, (n * size));
	return (res);
}
