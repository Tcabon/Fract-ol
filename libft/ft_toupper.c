#include "libft.h"

int		ft_toupper(int c)
{
	int i;

	i = c;
	if ('a' <= i && i <= 'z')
	{
		i = i - 32;
		return (i);
	}
	else
		return (c);
}
