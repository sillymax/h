/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:25:32 by ychng             #+#    #+#             */
/*   Updated: 2024/06/22 00:45:07 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((haystack[h]) && (h < len))
	{
		if (haystack[h] == needle[n])
		{
			while ((haystack[h + n] == needle[n]) && ((h + n) < n))
			{
				if (needle[n + 1] == '\0')
					return ((char *)haystack + h);
				n++;
			}
			n = 0;
		}
		h++;
	}
	return (NULL);
}
