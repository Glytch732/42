/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:20:57 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 12:52:17 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	i = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
