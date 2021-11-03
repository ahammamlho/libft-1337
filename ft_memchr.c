/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:09:35 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:09:35 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*temp;
	size_t		i;

	i = 0;
	temp = (char *)str;
	while (temp && temp[i] != '\0' && i < n)
	{
		if (temp[i] == (char )c)
			return ((char *)&temp[i]);
		i++;
	}
	return (0);
}
