/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:19:52 by abal              #+#    #+#             */
/*   Updated: 2015/12/11 16:40:07 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_isneg(int isneg, char *str)
{
	if (isneg == 1)
		str[0] = '-';
	return (str);
}

static int	ft_itoa_count(int a)
{
	int		i;

	i = 0;
	while (a)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nb)
{
	int		i;
	char	*str;
	int		isneg;

	if (nb == 0 || nb == -2147483648)
		return ((nb == 0) ? ft_strdup("0") : ft_strdup("-2147483648"));
	i = 0;
	isneg = 0;
	if (nb < 0)
	{
		i++;
		isneg = 1;
		nb = nb * (-1);
	}
	i = ft_itoa_count(nb) + i;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (nb)
	{
		str[--i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ft_isneg(isneg, str));
}
