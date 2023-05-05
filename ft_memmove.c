/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:36:03 by ychng             #+#    #+#             */
/*   Updated: 2023/04/29 13:47:17 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t	i;
	char	*temp;
	char	*char_dest;
	char	*char_src;

	temp = malloc(sizeof(char) * length);
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < length)
	{
		temp[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < length)
	{
		char_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
