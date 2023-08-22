#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*d;
	unsigned char	*s;
	int	i;

	i = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;

	while (i < n)
	{
		if (d[i] != s[i])
			return d[i] - s[i];
		i++;
	}
	return 0;
}
