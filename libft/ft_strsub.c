/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:27:32 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 18:39:49 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sfresh;

	i = 0;
	if (!s || ft_strlen(s) == 0)
		return (NULL);
	while (s[start + i])
		i++;
	sfresh = malloc(sizeof(char) * len + 1);
	if (!sfresh)
		return (NULL);
	if (len <= 0)
		return ("");
	i = 0;
	while (s[start + i] && i < len)
	{
		sfresh[i] = s[start + i];
		i++;
	}
	sfresh[i] = '\0';
	return (sfresh);
}
