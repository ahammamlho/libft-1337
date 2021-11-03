/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:10:15 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 19:34:58 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*t_dest;
	char			*t_src;

	i = 0;
	t_dest = dest;
	t_src = (char *)src;
	while (i < n)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return (dest);
}
