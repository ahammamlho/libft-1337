/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:09:54 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:09:54 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	unsigned char const		*t_str1;
	unsigned char const		*t_str2;

	i = 0;
	t_str1 = (unsigned char const *)str1;
	t_str2 = (unsigned char const *)str2;
	while (t_str1[i] == t_str2[i] && i < n)
		i++;
	return (t_str1[i] - t_str2[i]);
}
