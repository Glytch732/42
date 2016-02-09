#include "libft.h"

void	ft_lstaddend(t_list **lst, t_list *new_elem)
{
	t_list	*prev;

	while (*lst)
	{
		prev = *lst;
		*lst = (*lst)->next;
	}
	if (new_elem)
		prev->next = new_elem;
}
