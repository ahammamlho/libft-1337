/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:54:03 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 18:49:26 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_add_char(const char *src, char c)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc (ft_strlen(src) + 2);
	while (src && src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = c;
	result[i + 1] = '\0';
	return (result);
}

char	*ft_reverse(char *src)
{
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((const char *)src);
	while (i < len / 2)
	{
		temp = src[i];
		src[i] = src[len - 1 - i];
		src[len - 1 - i] = temp;
		i++;
	}
	return (src);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		nbr;
	int		mod;

	result = 0;
	nbr = n;
	mod = 0;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
	{
		result = ft_add_char(result, '8');
		nbr = -214748364;
	}
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		mod = nbr % 10;
		result = ft_add_char(result, mod + '0');
		nbr = nbr / 10;
	}
	if (n < 0)
		result = ft_add_char(result, '-');
	return (ft_reverse(result));
}
/*
int main()
{
	//char src[] = "1ab3";
	printf("->|%s|",ft_itoa(-2147483647));
}*/