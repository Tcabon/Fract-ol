#include "libft.h"

char		**ft_cpy_tab(char **tabl)
{
	unsigned int	i;
	char			**dest;

	i = 0;
	dest = (char**)malloc(sizeof(char*) * ft_len_tab(tabl) + 1);
	while (tabl[i])
	{
		dest[i] = ft_strdup(tabl[i]);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
