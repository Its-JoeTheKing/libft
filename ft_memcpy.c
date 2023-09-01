#include "libft.h"

void	*ft_memcpy(void *dest, const void *s, int n)
{
	unsigned char	*p;
	unsigned char	*des;
	int	i;

	p = (unsigned char *)s;
	des = (unsigned char *)dest;
	i = 0;
	if (!dest && !s)
		return (NULL);
	while (n--)
	{
		des[i] = p[i];
		i++;
	}
	return (dest);
}
