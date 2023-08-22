#include "libft.h"

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;

	len = num_len(n);
	i = 0;
	res = (char *)malloc(len + 2);
	if (!res)
		return (0);
	if (n < 0)
	{
		n *= -1;
		res[i] = '-';
		len++;
	}
	if (n == 0)
		res[i] = '0';
	while (n)
	{
		res[len - i - 1] = '0' + n % 10;
		n = n / 10;
		i++;
	}
	res[len + 1] = '\0';
	return (res);
}
