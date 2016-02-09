/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:40:25 by abal              #+#    #+#             */
/*   Updated: 2015/12/14 18:01:06 by abal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*result;
	t_list	*tmp;
	t_list	*prev;

	prev = f(lst);
	result = prev;
	while (lst)
	{
		lst = lst->next;
		if (lst)
			tmp = f(lst);
		if (tmp)
		{
			prev->next = tmp;
			prev = prev->next;
		}
	}
	return (result);
}
