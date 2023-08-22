#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*str;
	unsigned char	ch;
	int	i;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;

	while (i < n)
	{
		if (str[i] == ch)
			return (str+i);
		i++;
	}
	return (0);
}
