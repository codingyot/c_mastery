#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	t;

	l = 0;
	while (str[l] != '\0')
		l++;
	i = -1;
	while (++i < --l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
	}
	return (str);
}

int    main()
{
        char str[50] = "doof";
        printf("The given string is =%s\n", str);
         printf("After reversing string is =%s", ft_strrev(str));
        return 0;
}   
