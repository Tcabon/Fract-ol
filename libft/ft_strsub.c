#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	cpy = ft_strnew(len + 1);
	if (!cpy)
		return (NULL);
	s += start;
	cpy = ft_strncpy(cpy, s, len);
	cpy[len] = 0;
	return (cpy);
}
