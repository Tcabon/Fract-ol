#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	*s2;
	char	search;
	int		mem;

	search = (char)c;
	i = 0;
	mem = -1;
	s2 = (char*)s;
	while (s2[i])
	{
		if (s2[i] == search)
			mem = i;
		i++;
	}
	if (s2[i] == search)
		mem = i;
	if (mem == -1)
		return (NULL);
	return (&s2[mem]);
}
