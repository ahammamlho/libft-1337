/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:11:24 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 19:43:44 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = (unsigned int)ft_strlen(dest);
	if (len_dest >= size)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && (len_dest + i < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return ((unsigned int)ft_strlen(src) + len_dest);
}

// int main()
// {
// 	char *s1 = "ahammam";
// 	char s2[13];
// 	printf("%d",(int)ft_strlcat(s2,s1,13));
// }