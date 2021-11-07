/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:10:15 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/07 16:05:04 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int			i;
	unsigned char			*t_dest;
	unsigned char			*t_src;

	i = 0;
	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	while (i < n)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char s1[] = "ahamma";
// 	char s2[] = "uiuiuuigjgj";
// 	printf("-->%s", (char *)ft_memcpy(s1,s2,5));
// }