#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
int main()
{
    char f[] = "shjiof";
    char g[] = "iouj8jg";

    printf("%s", ft_strcpy(f , g));
}
// int	main()
// {
// 	    char src[] = "source copies it's values to destination";
//       char dest[] = "destination receives values from source";
// 	printf("%s", ft_strcpy(dest, src));
// }