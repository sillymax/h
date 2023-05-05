/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:22:20 by ychng             #+#    #+#             */
/*   Updated: 2023/05/05 20:49:32 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_node(t_list *prevnode, t_list *lst)
{
	prevnode = lst;
	lst = lst -> next;
	del(prevnode -> content);
	free(prevnode);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prevnode;
	t_list	*newnode;
	t_list	*head;
	t_list	*temp;

	prevnode = 0;
	while (lst != 0)
	{
		newnode = malloc(sizeof(t_list));
		newnode -> content = f(lst -> content);
		newnode -> next = 0;
		if (prevnode == 0)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
		clear_node(prevnode, lst);
	}
	return (head);
}
