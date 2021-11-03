/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:10:53 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:10:53 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, unsigned int n)
{
	unsigned int	i;
	unsigned char	*temp;

	i = 0;
	temp = ptr;
	while (i < n)
	{
		*(temp + i) = x;
		i++;
	}
	return (ptr);
}
