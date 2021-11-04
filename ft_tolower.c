/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:13:42 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:13:42 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch <= 'Z' && ch >= 'A')
		ch = ch + 32;
	return (ch);
}
