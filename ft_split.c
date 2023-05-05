/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:47:00 by ychng             #+#    #+#             */
/*   Updated: 2023/05/03 20:24:07 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	count_word(char const *s, char c, int *count)
{
	int	length;
	int	i;
	int	old_i;

	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		while (i < length)
		{
			if (!(s[i] == c))
				break ;
			i++;
		}
		old_i = 0;
		while (i < length)
		{
			if (s[i] == c)
				break ;
			i++;
		}
		if (i > old_i)
			*count = *count + 1;
	}
}

void	add_into_strs(int *j, char **strs, char *buffer, int *strs_index)
{
	if (*j > 0)
	{
		buffer[*j] = '\0';
		strs[*strs_index] = malloc(sizeof(char) * (*j + 1));
		ft_strlcpy(strs[*strs_index], buffer, (*j + 1));
		(*strs_index)++;
	}
}

void	add_word(char const *s, char c,	char **strs, int *strs_index)
{
	int		length;
	int		i;
	int		j;
	char	buffer[16384];

	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		while (i < length)
		{
			if (!(s[i] == c))
				break ;
			i++;
		}
		j = 0;
		while (i < length)
		{
			if (s[i] == c)
				break ;
			buffer[j++] = s[i++];
		}
		add_into_strs(&j, strs, buffer, strs_index);
	}
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**strs;
	int		strs_index;

	count = 0;
	count_word(s, c, &count);
	strs = malloc(sizeof(char *) * count);
	strs_index = 0;
	add_word(s, c, strs, &strs_index);
	return (strs);
}
