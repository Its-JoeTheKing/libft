#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		size;

	size = ft_strlen(s);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, s, size);
	dest[size] = '\0';
	return (dest);
}
