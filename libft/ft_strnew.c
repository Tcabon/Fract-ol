#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;

	str = (void*)ft_memalloc(size + 1);
	if (str == NULL)
		return ((char*)NULL);
	else
		return ((char*)str);
}
