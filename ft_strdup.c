/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:56:59 by ychng             #+#    #+#             */
/*   Updated: 2024/06/21 00:54:48 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(str) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, str, size);
	return (ptr);
}
