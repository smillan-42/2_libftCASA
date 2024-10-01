#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len]) != NULL)
		len--;
	printf("%zu == i y %zu == len",i,len);
	s1 = ft_substr(s1, i, len - i + 1);
	return ((char *)s1);
}
/*
#include <stdio.h>
#include "ft_libft.h"

int main(void)
{
    char *s1 = "   ---Hello, World!---   ";
    char *set = " -";
    char *result;

    result = ft_strtrim(s1, set);
    if (result == NULL)
    {
        printf("Error: no se pudo recortar la cadena.\n");
        return (1);
    }

    printf("Cadena original: \"%s\"\n", s1);
    printf("Caracteres a eliminar: \"%s\"\n", set);
    printf("Cadena recortada: \"%s\"\n", result);

    // Liberar la memoria asignada
    free(result);

    return 0;
}
*/