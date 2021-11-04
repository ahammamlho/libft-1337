/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:56:06 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/03 17:53:14 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_m_alloc(const char *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str && str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			len++;
		}
		while (str[i] == c && str[i] != '\0')
			i++;
	}
	return (len + 1);
}

static char	*ft_add_mot(const char *str, int i, int j)
{
	int		len_mot;
	int		k;
	char	*mot;

	mot = 0;
	len_mot = (j - i + 1) + 1;
	mot = (char *)malloc (len_mot * sizeof(char));
	k = 0;
	while (k < len_mot - 1)
	{
		mot[k] = str[i + k];
		k++;
	}
	mot[k] = '\0';
	return (mot);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	result = 0;
	if (!str)
		return (result);
	result = (char **)malloc (ft_m_alloc (str, c) * sizeof(char *));
	while (str && str[i] != '\0')
	{
		j = i;
		while (str[i] != c && str[i] != '\0')
			i++;
		if (i != j)
			result[k++] = ft_add_mot(str, j, i - 1);
		while (str[i] == c && str[i] != '\0')
			i++;
	}
	result[k] = 0;
	return (result);
}

/*
int main()
{
    const char strs[]= "fkbm*lfgkmlk*fmbklfgmblk
	*fgmblgmbgl*gsdg*hdhbdj*dsfgsd*dsdsa****";
    char **result;
	result = 0;
    result = ft_split(strs,'*');
   int i = 0 ;
    while (result && result[i] != 0)
    {
         printf("%d-->|%s|\n", i, result[i]);
         i++;
    }
}*/