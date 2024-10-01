#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *)dest;
	s = (const char *)src;
	if (d > s)
	{
		n--;
		while (0 < n)
		{
			d[n] = s[n];
			n--;
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}