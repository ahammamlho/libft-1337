/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:05:39 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/07 11:58:12 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *result;
   // t_list  *temp;
    int     len;

    len = ft_lstsize(lst);
    result = (t_list *)malloc (len * sizeof(t_list));
    if (!result)
        return (0);
    while (lst)
	{
		if (f(lst->content) != 0)
        {
            lst->content = (lst->content);
            ft_lstadd_back(&result, lst);
        }
        else
        {
            del(lst->content);
            ft_lstadd_back(&result, lst);
        }
		lst = lst->next;
	}
    return (result);
}