/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:53:32 by ychng             #+#    #+#             */
/*   Updated: 2023/04/28 22:21:39 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t length)
{
	size_t	i;
	char	*char_str;

	char_str = str;
	if (!str)
		return ;
	i = 0;
	while (i < length)
	{
		char_str[i] = '\0';
		i++;
	}
}
