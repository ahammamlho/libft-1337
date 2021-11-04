/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:10:30 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:10:30 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// test
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*t_dest;
	char			*t_src;

	i = 0;
	t_dest = (char *)dest;
	t_src = (char *)src;
	while (i < n)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return ((void *)dest);
}
