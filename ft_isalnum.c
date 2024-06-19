/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:16:56 by ychng             #+#    #+#             */
/*   Updated: 2024/06/19 14:37:46 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	bool	isalpha;
	bool	isdigit;

	isalpha = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
	isdigit = (c >= '0' && c <= '9');
	return (isdigit || isalpha);
}
