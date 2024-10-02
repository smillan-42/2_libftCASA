/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:27:57 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/02 16:19:26 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_copy(char *dst, const char *src, size_t start, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[start + i] != '\0')
	{
		dst[i] = src[i + start];
		i++;
	}
	dst[size] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tam;
	char	*ptr;
	
	tam = ft_strlen(s);
	if (s == NULL )
		return (NULL);
	if (start > tam)
		len = 0;
	else if (tam < start + len)
		len = tam - start;
	ptr = (char *)malloc(len + 1);
    	if (!ptr)
        	return (NULL);
	ft_copy(ptr, s, start, len);
	return (ptr);
}
