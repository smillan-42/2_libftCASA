/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:21:11 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/02 15:25:49 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	a2;
	size_t	a1;
	int		i;

	i = 0;
	a2 = ft_strlen(s2);
	a1 = ft_strlen(s1);
	ptr = (char *)malloc(a2 + a1 + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[i - a1] != '\0')
	{
		ptr[i] = s2[i - a1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
