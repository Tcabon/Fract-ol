#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char*)s1;
	src = (char*)s2;
	if (n)
	{
		while (*src != c && n--)
			*dest++ = *src++;
		if (*src == c && n > 0)
		{
			*dest++ = *src;
			return (dest);
		}
	}
	return (NULL);
}
