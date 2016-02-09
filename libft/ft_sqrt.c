/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:39:22 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 16:39:30 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		diviseur;

	diviseur = nb;
	while (diviseur > 0)
	{
		if ((nb / diviseur) == diviseur && (nb % diviseur) == 0)
			return (diviseur);
		else
			diviseur--;
	}
	return (0);
}
