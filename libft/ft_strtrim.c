/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:27:39 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 18:13:42 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		count;
	int		len;
	char	*strim;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	if (s[i])
		while ((s[len - 1] == ' ') || (s[len - 1] == '\n')
				|| (s[len - 1] == '\t'))
			len--;
	strim = malloc(sizeof(char *) * (len - i) + 1);
	if (!strim || !s)
		return (NULL);
	while (count < (len - i))
	{
		strim[count] = s[i + count];
		count++;
	}
	strim[count] = '\0';
	return (strim);
}
