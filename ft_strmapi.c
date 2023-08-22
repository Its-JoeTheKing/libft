#include "libft.h"

static int	ft_strlenc(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		len;
	unsigned int	i;

	i = 0;
	len = ft_strlenc(s);
	res = (char *)malloc(len + 1);
	while (s[i])
	{
		res[i] = (*f)(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
