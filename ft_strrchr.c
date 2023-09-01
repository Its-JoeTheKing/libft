#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	i;

	count = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			count = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	if (count == -1)
		return 0;
	else
		return ((char *)(s+count));
}
