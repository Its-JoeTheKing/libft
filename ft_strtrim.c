#include "libft.h"

static int	count_sets(char const *str, char const *set)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

static int	exist_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);		
		i++;
	}
	return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	int		len;

	i = 0;
	j = 0;
	len = count_sets(s1, set);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		if (exist_set(set, s1[i]))
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
