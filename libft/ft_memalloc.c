#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;
	char	*str;

	i = 0;
	mem = (void*)malloc(size);
	str = (char*)mem;
	if (mem != NULL)
	{
		while (i++ < size)
			*str++ = 0;
	}
	return (mem);
}
