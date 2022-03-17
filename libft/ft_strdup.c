#include "libft.h"

char	*ft_strdup(char const *s)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strlen(s);
	dest = (char*)malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
