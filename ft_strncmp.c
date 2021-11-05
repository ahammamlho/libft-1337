/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:12:20 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:13:12 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	char		*t_str1;
	char		*t_str2;

	i = 0;
	t_str1 = (char *)str1;
	t_str2 = (char *)str2;
	while (t_str1[i] != '\0' && t_str1[i] == t_str2[i] && i < n - 1)
		i++;
	return (t_str1[i] - t_str2[i]);
}

// int main()
// {

// }