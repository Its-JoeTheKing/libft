#include "libft.h"

void	*ft_memset(void *s, int x, int n)
{
	int	i;
	unsigned char *p = (unsigned char *)s;
	i = 0;
	while(n--)
	{
		p[i] = (unsigned char)x;
		i++;
	}
	return s;
}
