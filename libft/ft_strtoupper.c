#include "libft.h"

char		*ft_strtoupper(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
