/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:27:01 by abal              #+#    #+#             */
/*   Updated: 2015/12/02 19:35:12 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_splitcount(char const *s, char c)
{
	int		i;
	int		j;
	int		test;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		test = 0;
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			test = 1;
		}
		if (test == 1)
			i++;
	}
	return (i);
}

static int	ft_splitword(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = ft_splitcount(s, c);
	str = (char **)malloc(sizeof(*str) * i + 1);
	j = 0;
	if (str == NULL)
		return (NULL);
	while (i > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		str[j] = ft_strsub(s, 0, (ft_splitword(s, c)));
		if (str[j] == NULL)
			return (NULL);
		s = s + ft_splitword(s, c);
		j++;
		i--;
	}
	str[j] = NULL;
	return (str);
}
