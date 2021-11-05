/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:34:55 by lahammam          #+#    #+#             */
/*   Updated: 2021/11/05 15:32:17 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;

    len = 0;
    while(lst)
    {
        len++;
        lst = lst->next;
    }
    return (len);
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
	t_list	n1, n2, n3;

    t_list *head;

    n1.content = "a1";
    n2.content = "a2";
    n3.content = "a3";
     

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = 0;
    show_list(head);
    printf("%d\n",ft_lstsize(head));
    show_list(head);
 
}