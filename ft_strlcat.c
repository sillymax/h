/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:05:18 by ychng             #+#    #+#             */
/*   Updated: 2024/06/21 01:15:02 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	temp;
	size_t	dest_size;
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	temp = ft_strlen(dest);
	dest_size = temp;
	i = 0;
	while (dest_size < (size - 1) && size && src[i])
		dest[dest_size++] = src[i++];
	dest[dest_size] = '\0';
	if (size > temp)
		return (temp + ft_strlen(src));
	return (size + ft_strlen(src));
}
