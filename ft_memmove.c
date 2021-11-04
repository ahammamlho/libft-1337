/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:10:30 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 12:10:30 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*t_dest;
	char			*t_src;

	i = 0;
	t_dest = (char *)dest;
	t_src = (char *)src;
	if (t_src + n < t_dest)
	{
		while (i < n)
		{	
			t_dest[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			t_dest[n - 1 - i] = t_src[n - 1 - i];
			i++;
		}
	}
	return ((void *)dest);
}

#include <string.h>

int main () {
   char dest[] = "abcdefghy";
   char dest1[] = "abcdefghy";
 //  const char src[]  = "new++++++";
   memmove(dest1 + 3, dest1, 5);
	ft_memmove(dest + 3, dest, 5);
   printf("dest = %s, dest1 = %s\n", dest, dest1);

   return(0);
}
