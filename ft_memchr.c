/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:44:48 by ychng             #+#    #+#             */
/*   Updated: 2023/04/30 16:58:14 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t length)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
