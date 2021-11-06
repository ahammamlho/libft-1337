/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:27:11 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/06 10:15:42 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	result->content = content;
	result->next = 0;
	return (result);
}

// int main()
// {
// 	 t_list	*result;
// 	 int a = 1;
// 	 result = ft_lstnew(&a);
// 	// printf("%d", result->content);
// }