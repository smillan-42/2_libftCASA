#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return (src);
		i++;
	}
	return (NULL);
}