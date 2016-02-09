/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:25:11 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 15:39:28 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*sjoin;

	i = 0;
	j = 0;
	k = 0;
	sjoin = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!sjoin)
		return (NULL);
	while (s1[k])
		sjoin[i++] = s1[k++];
	while (s2[j])
		sjoin[i++] = s2[j++];
	sjoin[i] = '\0';
	return (sjoin);
}
