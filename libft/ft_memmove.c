/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:21:24 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 13:01:43 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	i = 0;
	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	if (str_dst > str_src)
		while (i < len)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			str_dst[i] = str_src[i];
			i++;
		}
	return (dst);
}
