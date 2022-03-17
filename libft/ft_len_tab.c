#include "libft.h"

int	ft_len_tab(char **tabl)
{
	int i;

	i = 0;
	if (tabl == NULL)
		return (0);
	while (tabl[i])
		i++;
	return (i);
}
