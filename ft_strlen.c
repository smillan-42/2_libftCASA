#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
    const char *str = "Hola, mundo!";
    size_t length = ft_strlen(str);

    printf("La longitud de la cadena es: %zu\n", length);
    return 0;
}
*/
