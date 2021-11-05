/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:56:29 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/05 11:07:28 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
}


void show_list(t_list *head)
{
    while (head)
    {
     printf("%s - %p \n",head->content,head);
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
    n3.next = 0;

    ft_lstadd_front( &head, &n4);

    show_list(&n4);
 
}