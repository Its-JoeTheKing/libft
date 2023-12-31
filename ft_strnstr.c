#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	i;
	int	j;
	int	st_len;

	i = 0;
	j = 0;
	st_len = ft_strlen(needle);
	if (needle[i] == '\0' || needle == haystack)
		return ((char *)(haystack));
	if (!haystack && !needle)
	 	return (0);
	while (haystack[i] && j != st_len && i < n)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == st_len)
		return ((char *)(haystack + i - j));
	return (0);
}
