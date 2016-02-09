/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:21:33 by abal              #+#    #+#             */
/*   Updated: 2015/12/01 14:21:35 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str_b;

	str_b = (unsigned char*)b;
	i = 0;
	while (i < len)
		str_b[i++] = c;
	return (b);
}
