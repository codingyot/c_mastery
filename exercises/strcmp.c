#include <unistd.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s1[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
int main()
{
    char *x = "always";
    char *y = "al";

    printf("%d", ft_strcmp(x, y));
}