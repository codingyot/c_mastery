#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_cpy(char *str, char *dest)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	i = len(src);
	dest = (char *)malloc(sizeof(char) * i);
	if (!(dest))
		return (NULL);
	return (str_cpy(src, dest));
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World ";
	allocated = ft_strdup(str);
	printf("copied %s@", allocated);
	allocated = ft_strdup(str);
	printf("To %s$ @ %p\n", allocated, allocated);
}