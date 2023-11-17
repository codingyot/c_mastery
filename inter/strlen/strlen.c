#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char *x = "helloboy";
    printf("%d", ft_strlen(x)); // Fixed the function call
    return 0;
}
