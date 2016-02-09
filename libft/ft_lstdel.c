/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:39:58 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 18:18:33 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;

	while (*alst)
	{
		elem = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = elem;
	}
	free(*alst);
}
