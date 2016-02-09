/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:18:12 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 17:15:58 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		a;
	int		isneg;

	i = 0;
	a = 0;
	isneg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (str[i])
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (a * isneg);
		a = a * 10 + (str[i++] - '0');
	}
	return (a * isneg);
}
