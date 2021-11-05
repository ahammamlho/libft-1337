/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:45:12 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/05 15:35:34 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != 0)
    {
        lst = lst->next;
    }
    return (lst);
}
void show_list(t_list *head)
{
    while (head)
    {
     printf("%s \n",head->content);
     head = head->next;
    }
}

int main()
{
	t_list	n1, n2, n3, n4;
    t_list *head;

    n1.content = "a1";
    n2.content = "a2";
    n3.content = "a3";
    n4.content = "a4";
     
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = 0;
    
    t_list *last;
    last = ft_lstlast(head);
    printf("%s \n",last->content);
 
}