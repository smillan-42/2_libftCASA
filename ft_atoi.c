/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:07:37 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/02 14:56:35 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	a;
	int	num;
	int	i;

	i = 0;
	a = 1;
	num = 0;
	while ((((nptr[i] >= 9) && (nptr[i] <= 13))
			|| (nptr[i] == ' ')) && (nptr[i] != '\0'))
	{
		i++;
	}
	if (((nptr[i] == '+') || (nptr[i] == '-')) && (nptr[i] != '\0'))
	{
		if (nptr[i] == '-')
			a = (-1) * a;
		i++;
	}
	while ((nptr[i] <= '9') && (nptr[i] >= '0') && (nptr[i] != '\0'))
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (a * num);
}

/*
#include <stdio.h>
#include <ctype.h>
int main() {
    const char str1[] = "1234";
    const char str2[] = "-5678";
    const char str3[] = "  42";
    const char str4[] = "not a number";
    
    printf("Convirtiendo '%s': %d\n", str1, ft_atoi(str1));
    printf("Convirtiendo '%s': %d\n", str2, ft_atoi(str2));
    printf("Convirtiendo '%s': %d\n", str3, ft_atoi(str3));
    printf("Convirtiendo '%s': %d\n", str4, ft_atoi(str4));  // Retornará 0

    return 0;
}
*/
