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

	i = 0;
	t_s = (char *)s;
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (0);
	while (t_s && t_s[i] != '\0' && i < len)
	{
		result[i] = t_s[i + start];
		i++;
	}
	result[i] = '\0'
	return (result);
}
