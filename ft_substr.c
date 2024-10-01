#include "libft.h"

void	ft_copy(char *dst, const char *src, size_t start, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i + start];
		i++;
	}
	dst[size] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	aux_len;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	aux_len = ft_strlen(s);
	if (aux_len - start > len)
		aux_len = (unsigned int)len;
	ptr = (char *)malloc(aux_len - start + 1);
	if (ptr == NULL || start > aux_len)
		return (NULL);
	ft_copy(ptr, s, (size_t)start, aux_len);
	return (&ptr[0]);
}
/*
int main() {
    char *original_str = "Hola Mundo!";
    char *substring;

    // Caso 1: Subcadena dentro del rango
    substring = ft_substr(original_str, 5, 5);  // Debería devolver "Mundo"
    if (substring != NULL) {
        printf("Subcadena (Caso 1): %s\n", substring);
        free(substring);  // Liberar memoria
    } else {
        printf("Error en Caso 1\n");
    }

    // Caso 2: Subcadena más corta de lo esperado
    substring = ft_substr(original_str, 6, 50);  // Debería devolver "undo!"
    if (substring != NULL) {
        printf("Subcadena (Caso 2): %s\n", substring);
        free(substring);  // Liberar memoria
    } else {
        printf("Error en Caso 2\n");
    }

    // Caso 3: Subcadena desde un índice fuera de la longitud de la cadena original
    substring = ft_substr(original_str, 20, 5);  // Debería devolver una cadena vacía ""
    if (substring != NULL) {
        printf("Subcadena (Caso 3): '%s'\n", substring);
        free(substring);  // Liberar memoria
    } else {
        printf("Error en Caso 3\n");
    }

    return 0;
}
*/
