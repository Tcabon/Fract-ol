#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	size_t	pos;

	if (!*s2)
		return ((char *)s1);
	pos = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1++, s2, pos) == 0)
			return ((char *)s1 - 1);
	}
	return (NULL);
}
