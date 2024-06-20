/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:34:42 by ychng             #+#    #+#             */
/*   Updated: 2024/06/21 00:10:19 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	prev_node = 0;
	next_node = *lst;
	while (next_node != 0)
	{
		prev_node = next_node;
		next_node = next_node -> next;
		del(prev_node -> content);
		free(prev_node);
	}
	*lst = next_node;
}
