/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:12:35 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:12:35 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*t_s1;
	char		*t_s2;

	i = 0;
	j = 0;
	t_s1 = (char *)s1;
	t_s2 = (char *)s2;
	while (t_s1[i] != '\0')
	{
		while (t_s2 && t_s1[i + j] == t_s2[j] && i + j < n)
		{
			j++;
			if (t_s2[j] == '\0')
				return (&t_s1[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
