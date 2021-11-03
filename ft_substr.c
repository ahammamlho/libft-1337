/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:24:12 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 15:57:43 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*result;
	char				*t_s;
	unsigned int		i;
	unsigned int		j;

	result = (char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (result);
	i = 0;
	j = 0;
	t_s = (char *)s;
	while (t_s && t_s[i] != '\0')
	{
		if (start <= i && j < len)
		{
			result[j] = t_s[i];
			j++;
		}
		i++;
	}
	return (result);
}
