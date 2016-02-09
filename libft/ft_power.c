/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:39:38 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 16:39:40 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int power)
{
	if (power > 1)
	{
		nb = nb * ft_power(nb, power - 1);
		return (nb);
	}
	if (power == 1 || power == 0)
		return (power == 1 ? nb : 1);
	return (0);
}