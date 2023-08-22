#include "libft.h"

static int	ft_strlenc(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	len = ft_strlenc(s1) + ft_strlenc(s2);
	str = (char *)malloc(len+1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		str[j + i] = s2[i];
		i++;
	}
	str[i + j] = '\0';
	return (str);
}
