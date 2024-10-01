#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	size_t	i;

	src = (char *)s;
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == c)
			return (src);
		i--;
	}
	return (NULL);
}