/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:20:15 by abal              #+#    #+#             */
/*   Updated: 2015/12/01 14:20:17 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = malloc(sizeof(void) * size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
