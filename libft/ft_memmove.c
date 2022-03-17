#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;

	temp = NULL;
	if (n)
		temp = malloc(n);
	if (temp)
	{
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
		free(temp);
	}
	return (dest);
}
