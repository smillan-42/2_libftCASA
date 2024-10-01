#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	a2;
	size_t	a1;
	int	i;

	i = 0;
	a2 = ft_strlen(s2);
	a1 = ft_strlen(s1);
	ptr = (char *)malloc(a2 + a1 + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i]  != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[i - a1]  != '\0')
	{
		ptr[i] = s2[i - a1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include "ft_libft.h"

int main() {
    char *s1 = "Hola";
    char *s2 = " Mundo";
    char *resultado;

    // Probar concatenación de s1 y s2
    resultado = ft_strjoin(s1, s2);
    if (resultado != NULL) {
        printf("Resultado de ft_strjoin: %s\n", resultado);
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error: No se pudo concatenar las cadenas.\n");
    }

    // Probar con una cadena vacía
    resultado = ft_strjoin("", s2);
    if (resultado != NULL) {
        printf("Resultado con cadena vacía: %s\n", resultado);
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error: No se pudo concatenar las cadenas.\n");
    }

    // Probar con otra cadena vacía
    resultado = ft_strjoin(s1, "");
    if (resultado != NULL) {
        printf("Resultado con segunda cadena vacía: %s\n", resultado);
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error: No se pudo concatenar las cadenas.\n");
    }

    // Probar con ambas cadenas vacías
    resultado = ft_strjoin("", "");
    if (resultado != NULL) {
        printf("Resultado con ambas cadenas vacías: '%s'\n", resultado);
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error: No se pudo concatenar las cadenas.\n");
    }

    return 0;
}
*/