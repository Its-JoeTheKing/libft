#include "libft.h"

static int	exist_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_sets(const char *str, const char *set)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (exist_set(str[i], set))
	{
		c++;
		i++;
	}
	while (str[i])
	{
		i++;
	}
	i--;
	while (exist_set(str[i], set))
	{
		c++;
		i--;
	}
	return(c);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		k;
	int		len;
	int		last;

	if (!s1 || set[0] == '\0')
		return (0);
	i = 0;
	k = 0;
	last = ft_strlen(s1);
	len = last - count_sets(s1, set);
	res = (char *)malloc(len + 1);
	if (len == 0)
		return "";
	if (!res)
		return (0);
	while (exist_set(s1[i], set))
		i++;
	while (k < len)
	{
		res[k] = s1[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}
