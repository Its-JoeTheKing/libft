#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == chr)
		return ((char *)(s + i));
	return (0);
}
