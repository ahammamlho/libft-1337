/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:24:37 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/05 16:37:24 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    while (*lst)
    {
        ft_lstdelone(*lst, del);
        lst = lst->next;
    }
}

int main()
{
    
}