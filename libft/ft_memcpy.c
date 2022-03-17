#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const char	*src;
	char		*dest;

	src = s2;
	dest = s1;
	while (n--)
		*dest++ = *src++;
	return (s1);
}
