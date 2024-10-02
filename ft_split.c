/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:03:24 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:40 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	encontrar(char const *s, char c, int i, int k)
{
	size_t	sol;

	sol = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (k)
			{
				k = 0;
				sol++;
			}
			i++;
		}
		k = 1;
	}
	return (sol);
}

static void	*free_mem(char **cad, int aux)
{
	while (aux >= 0)
	{
		free(cad[aux]);
		aux--;
	}
	free(cad);
	return (NULL);
}

char	**crear_mini(char const *s, char c, char **cad, int aux)
{
	int	i;
	int	j;
	int	stat;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			return (cad[aux] = NULL, cad);
		j = i;
		while (c != s[i] && s[i] != '\0')
			i++;
		cad[aux] = (char *)malloc((i - j + 1) * sizeof(char));
		if (!cad[aux])
			return (free_mem(cad, aux));
		stat = j;
		while (i > j++)
			cad[aux][j - stat - 1] = s[j - 1];
		cad[aux][j - stat - 1] = '\0';
		aux++;
	}
	cad[aux] = NULL;
	return (cad);
}

char	**ft_split(char const *s, char c)
{
	char	**cad;
	size_t	num_cad;

	if (!s)
		return (NULL);
	num_cad = encontrar(s, c, 0, 1) + 1;
	cad = (char **)malloc(num_cad * sizeof(char *));
	if (!cad)
		return (NULL);
	cad = crear_mini(s, c, cad, 0);
	return (cad);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Caso de prueba 1: Cadena normal con múltiples delimitadores
    char str1[] = "Hola,,esto,,es,una,prueba";
    char delimitador1 = ',';
    char **resultado1 = ft_split(str1, delimitador1);

    printf("Resultado 1:\n");
    for (int i = 0; resultado1[i] != NULL; i++) {
        printf("Subcadena [%d]: %s\n", i, resultado1[i]);
        free(resultado1[i]); // Liberar cada subcadena
    }
    free(resultado1); // Liberar el array de punteros

    // Caso de prueba 2: Cadena con múltiples espacios como delimitador
    char str2[] = "   Separando   por   espacios   multiples   ";
    char delimitador2 = ' ';
    char **resultado2 = ft_split(str2, delimitador2);

    printf("\nResultado 2:\n");
    for (int i = 0; resultado2[i] != NULL; i++) {
        printf("Subcadena [%d]: %s\n", i, resultado2[i]);
        free(resultado2[i]);
    }
    free(resultado2);

    // Caso de prueba 3: Cadena con ningún delimitador
    char str3[] = "SinDelimitador";
    char delimitador3 = ',';
    char **resultado3 = ft_split(str3, delimitador3);

    printf("\nResultado 3:\n");
    for (int i = 0; resultado3[i] != NULL; i++) {
        printf("Subcadena [%d]: %s\n", i, resultado3[i]);
        free(resultado3[i]);
    }
    free(resultado3);

    // Caso de prueba 4: Cadena vacía
    char str4[] = "";
    char delimitador4 = ',';
    char **resultado4 = ft_split(str4, delimitador4);

    printf("\nResultado 4:\n");
    if (resultado4[0] == NULL) {
        printf("Subcadena [0]: NULL\n");
    }
    free(resultado4);

    // Caso de prueba 5: Delimitador que no aparece en la cadena
    char str5[] = "Una cadena sin delimitadores específicos";
    char delimitador5 = ';';
    char **resultado5 = ft_split(str5, delimitador5);

    printf("\nResultado 5:\n");
    for (int i = 0; resultado5[i] != NULL; i++) {
        printf("Subcadena [%d]: %s\n", i, resultado5[i]);
        free(resultado5[i]);
    }
    free(resultado5);

    return 0;
}
*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	**res;
	char	c;
	size_t	i;

	str = strdup("         Hola             mundo           ");
	c = ' ';

	res = ft_split(str, c);
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("Item %lu: \"%s\"\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	free(str);
	return (0);
}*/
