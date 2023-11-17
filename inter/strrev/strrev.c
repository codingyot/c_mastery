#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
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
    char tmp;
    int x;
    int l;

    x = 0;
    l = ft_strlen(str) -1;
    while(l > x)
    {
        tmp = str[x];
        str[x] = str[l];
        str[l] = tmp;
        x++;
        l--;
    }
    return (str);
}
int main()
{
    char str[50] = "eyr nalla";
    printf("%s\n", ft_strrev(str));

    printf("After reversing string is = %s", ft_strrev(str));
    return 0;
}