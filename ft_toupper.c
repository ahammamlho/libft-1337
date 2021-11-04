/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:13:53 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:13:53 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_touper(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch <= 'z' && ch >= 'a')
		ch = ch - 32;
	return (ch)
}
