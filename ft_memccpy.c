#include "libft.h"

void	*ft_memcpy(void *dest, const void *s, int c, int n)
{
	unsigned char	*p;
	unsigned char	*des;
	int	i;

	p = (unsigned char *)s;
	des = (unsigned char *)dest;
	i = 0;
	while (n-- && p[i] != ((unsigned	char)c))
	{
		des[i] = p[i];
		i++;
	}
	return (dest);
}
