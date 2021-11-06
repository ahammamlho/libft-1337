/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:24:12 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/06 17:13:50 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*result;
	unsigned int		i;

	i = 0;
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (0);
	if (len == 0 || ft_strlen(s) < start)
		return (result);
	while (s && s[i] != '\0' && i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	if (len != 0)
		result[i] = '\0';
	return (result);
}

// int main()
// {
// 	printf ("%s",ft_substr("ahammam", 10, 2));
// }
