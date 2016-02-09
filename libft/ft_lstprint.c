#include "libft.h"

void	ft_lstprint(t_list **lst)
{
	if (lst)
	{
		ft_putstr((char *)(*lst)->content);
		*lst = (*lst)->next;
		ft_lstprint(lst);
	}
}
