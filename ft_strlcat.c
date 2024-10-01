#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= size)
		return (size + s);
	while ((src[i] != '\0') && ((i + d + 1) < size))
	{
		dst[i + d] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (s + d);
}