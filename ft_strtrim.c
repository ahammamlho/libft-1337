/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:56:45 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 17:31:00 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int		i;
	char	*t_str;

	i = 0;
	t_str = (char *)str;
	while (t_str && t_str[i] != '\0')
		i++;
	return (i);
}

int	ft_isexist(char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_first(char *src, char *set)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (!ft_isexist(set, src[i]))
			return (i);
		i++;
	}
	return (-1);
}

int	ft_end(char *src, char *set)
{
	int	len;

	len = ft_strlen((const char *)src);
	while (len > 0)
	{
		if (!ft_isexist(set, src[len - 1]))
			return (len - 1);
		len--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;
	int		i;

	i = 0;
	start = ft_first((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set);
	if (start == -1)
		start = 0;
	if (end == -1)
		end = ft_strlen(s1);
	result = (char *)malloc(end - start);
	if (!result)
		return (result);
	while (start < end + 1)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("ahama7ma", "547a"));
}*/