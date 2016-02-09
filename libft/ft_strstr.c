/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:27:20 by abal              #+#    #+#             */
/*   Updated: 2015/12/01 14:27:21 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		test;
	int		save_j;

	j = -1;
	if (!(ft_strlen(s2)))
		return ((char *)s1);
	while (s1[++j])
	{
		test = 0;
		i = 0;
		save_j = j;
		while (s1[j] == s2[i] && s2[i] != '\0')
		{
			j++;
			i++;
			test = 1;
		}
		if (s2[i] == '\0')
			return ((char *)s1 + (j - i));
		if (test == 1)
			j = save_j + 1;
	}
	return (NULL);
}
