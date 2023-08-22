#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = len - start;
	if (size < 0)
		return (NULL);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while ((int)start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
