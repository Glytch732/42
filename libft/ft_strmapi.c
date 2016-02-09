/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:25:51 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 13:03:59 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	char	*sfresh;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	sfresh = malloc(sizeof(char) * j + 1);
	if (!sfresh)
		return (NULL);
	while (s1[i])
	{
		sfresh[i] = f(i, s1[i]);
		i++;
	}
	sfresh[i] = '\0';
	return (sfresh);
}
