#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static int	wd_len(char const *str, char c, int i)
{
	int	n;
	int	len;

	n = i;
	while (str[n++] != c)
		len++;
	return (len);
}

static char	*get_word(char const *str, char c, int i)
{
	int		n;
	int		len;
	int		k;
	char	*word;

	n = i;
	k = 0;
	len = wd_len(str, c, i);
	word = (char *)malloc(len + 1);
	while (str[n] != c && str[n])
	{
		word[k] = str[n];
		k++;
		n++;
	}
	word[k] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		wd_co;
	char	**res;
	int		len;

	len = count_words(s, c);
	i = 0;
	wd_co = 0;
	res = (char **)malloc(sizeof(char *) * len);
	if (!res)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[wd_co] = get_word(s, c, i);
			wd_co++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}
