#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while(src[i] != '\0' && n > i)
    {
        dest[i] = src[i];
        i++;
    }
    while (n > i)
        dest[i] = '\0';
        i++;
    return(dest);
}
int main()
{
    char x[] = "hello";
    char y[] = "heyboysweare here for fun";
    int f = 5;
    printf("%s", ft_strncpy(x, y, f));
}
