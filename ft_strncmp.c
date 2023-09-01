#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if (n < 1)
		return (0);	
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
