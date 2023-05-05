/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:05:18 by ychng             #+#    #+#             */
/*   Updated: 2023/04/29 18:10:51 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	j = 0;
	dest_length = 0;
	if (length > 0)
	{
		while (dest[i] && (i < length))
			i++;
		dest_length = i;
		while (src[j] && (i < (length - 1)))
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	src_length = 0;
	while (src[src_length])
		src_length++;
	return (dest_length + src_length);
}
