#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	res = (char *)malloc(ft_strlen((char *)s));
	if (!res)
		return (0);
	while (i < ft_strlen((char *)s))
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
