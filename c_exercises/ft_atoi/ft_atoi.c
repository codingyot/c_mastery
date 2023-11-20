#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    sign = 1;
    result = 0;
    i = 0;
    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
    i++;
    while(str[i] =='+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        result = result *10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}

int main()
{
    printf("%d", ft_atoi("   -----+++12345s68"));
}