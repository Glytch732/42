/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:20:43 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 19:08:54 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cp_s1;
	unsigned char	*cp_s2;

	i = 0;
	cp_s1 = (unsigned char *)s1;
	cp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*cp_s1 == *cp_s2 && (i < n - 1))
	{
		i++;
		cp_s1++;
		cp_s2++;
	}
	if (*cp_s1 != *cp_s2)
		return (*cp_s1 - *cp_s2);
	return (0);
}
