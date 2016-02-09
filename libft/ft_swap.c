#include "libft.h"

void	ft_swap(int *v1, int *v2)
{
	int		tmp;

	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}
