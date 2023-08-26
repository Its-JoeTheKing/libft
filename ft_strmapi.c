#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	while (s[i])
	{
		res[i] = (*f)(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
