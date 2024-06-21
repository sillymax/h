/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:38:32 by ychng             #+#    #+#             */
/*   Updated: 2024/06/22 00:52:39 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
