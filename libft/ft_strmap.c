#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	int		size;

	size = ft_strlen(s);
	str = (char *)ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (f != NULL)
			str[i] = f(s[i]);
		else
			str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
