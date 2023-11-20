#include <stdio.h>

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

int main()
{
    char *x = "hello this my re-write of this funtion";
    printf("%d", ft_strlen(x));
}