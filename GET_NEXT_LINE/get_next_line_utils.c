/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabaud <vabaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:15:08 by vabaud            #+#    #+#             */
/*   Updated: 2023/11/23 05:27:09 by vabaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;
	size_t	total_lenght;

	i = 0;
	j = 0;
	total_lenght = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (total_lenght + 1));
	if (!nstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
