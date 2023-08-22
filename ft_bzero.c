#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int	i;
	unsigned char *p = (unsigned char *)s;

	i = 0;
	while(n--)
	{
		p[i] = 0;
		i++;
	}
}
