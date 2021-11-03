/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:12:04 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 16:56:41 by lahammam         ###   ########.fr       */
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
