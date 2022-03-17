#include "libft.h"

int		ft_tolower(int c)
{
	int i;

	i = c;
	if ('A' <= c && c <= 'Z')
	{
		i = i + 32;
		return (i);
	}
	else
		return (c);
}
