#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
            i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}
int main()
{
    printf("%d", ft_atoi("   ---+--+12345f679349889553533"));
}