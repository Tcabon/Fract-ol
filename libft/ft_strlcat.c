#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	buff;
	size_t	len2;
	size_t	size_ori;

	size_ori = size;
	len2 = ft_strlen(src);
	buff = ft_strlen(dest) + len2;
	while (*dest && size)
	{
		size--;
		dest++;
	}
	if (size == 0)
		return (size_ori + len2);
	i = 0;
	while (src[i] && size-- > 1)
		*dest++ = src[i++];
	*dest = 0;
	return (buff);
}
