#include "libft.h"

char		*ft_strnchr(char *s, size_t n, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		while (i <= n)
		{
			if (s[i] == c)
				return (&s[i]);
			i++;
		}
	}
	return (NULL);
}
