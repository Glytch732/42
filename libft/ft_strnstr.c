/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:37:08 by abal              #+#    #+#             */
/*   Updated: 2015/12/08 15:13:08 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *m, const char *a, size_t len)
{
	size_t	i;
	size_t	j;
	int		test;
	int		save_j;

	j = -1;
	if (!(ft_strlen(a)))
		return ((char *)m);
	while (m[++j] && j < len)
	{
		test = 0;
		i = 0;
		save_j = j;
		while (m[j] == a[i] && a[i] != '\0' && j < len)
		{
			i++;
			j++;
			test = 1;
		}
		if (a[i] == '\0')
			return ((char *)m + (j - i));
		if (test == 1)
			j = save_j + 1;
	}
	return (NULL);
}
