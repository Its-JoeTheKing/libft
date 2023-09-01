#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*new;
	int	slen;
	int	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if ((int)start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, (char *)(s + start), finish + 1);
	return (new);
}