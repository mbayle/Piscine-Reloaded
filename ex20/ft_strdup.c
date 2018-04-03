#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	src_len;
	char	*strdup;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	strdup = (char*)malloc(sizeof(*strdup) * (src_len));
	if (strdup == NULL)
		return (NULL);
	while (i < src_len}
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[src_len] = '\0';
	return (strdup);
}
