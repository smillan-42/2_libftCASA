#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h> // Para el tamaño de la memoria y otros posibles usos

int main() {
    // Declaramos un array de 10 caracteres
    char buffer[10];

    // Rellenamos el array con algún valor no nulo para mostrar el efecto de ft_bzero
    for (int i = 0; i < 10; i++) {
        buffer[i] = 'A';
    }

    // Imprimimos el contenido del buffer antes de usar ft_bzero
    printf("Antes de ft_bzero:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    // Usamos ft_bzero para poner en cero los primeros 5 bytes del buffer
    ft_bzero(buffer, 5);

    // Imprimimos el contenido del buffer después de usar ft_bzero
    printf("Después de ft_bzero:\n");
    for (int i = 0; i < 10; i++) {
        if (buffer[i] == '\0') {
            printf("\\0 ");  // Imprime el carácter nulo como \0
        } else {
            printf("%c ", buffer[i]);
        }
    }
    printf("\n");

    return 0;
}
*/
