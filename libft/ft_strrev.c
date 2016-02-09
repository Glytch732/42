#include "libft.h"

char	*ft_strrev(char *src)
{
	int		i;
	int		j;
	char	tmp;

	i = ft_strlen(src);
	while (j < i)
	{
		tmp = src[i];
		src[i] = src[j];
		src[j] = tmp;
		j++;
		i--;
	}
	return (src);
}
