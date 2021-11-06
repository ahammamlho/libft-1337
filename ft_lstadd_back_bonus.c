/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:51:37 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/06 10:15:00 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

// void ft_lstadd_back(t_list **lst, t_list *new)
// {
//     t_list *last;

//     last = ft_lstlast(*lst);
//     last->next = new;
// }
// void show_list(t_list *head)
// {
//     while (head)
//     {
//      printf("%s - %p \n",head->content,head);
//      head = head->next;
//     }
// }

// int main()
// {
// 	t_list	n1, n2, n3, n4;

//     t_list *head;

//     n1.content = "a1";
//     n2.content = "a2";
//     n3.content = "a3";
//     n4.content = "a4";

//     head = &n1;
//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = 0;
//    show_list(head);
//    ft_lstadd_back( &head, &n4);
//      printf("-------------\n");
//     show_list(head);

// }