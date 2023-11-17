#include <stdio.h>
#include <unistd.h>

int len(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strrev(char *str)
{
    int i;
    int r;
    char tmp;

    i = 0;
    r = len(str) -1;
    while(r > i)
    {
        tmp = str[i];
        str[i] = str[r];
        str[r] = tmp;
        i++;
        r--;
    }
    return (str);
}
int main()
{
    char x[] = "nallA";
    printf("%s", ft_strrev(x));
}