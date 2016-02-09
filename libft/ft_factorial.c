#include "libft.h"

int		ft_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (nb);
	return (nb * ft_factorial(nb - 1));
}
