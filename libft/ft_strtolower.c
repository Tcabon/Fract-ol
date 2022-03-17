#include "libft.h"

char		*ft_strtolower(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
