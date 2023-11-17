#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void   *repeat_alpha(char *str)
{
    int i;
    int b;

    i = 0;
    b = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            b = str[i] - 97;
            while(b > 0)
            {
                ft_putchar(str[i]);
                b--;
            }
        }  
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            b = str[i] - 65;
            ft_putchar(str[i]);
            b--;
        }
        else
        {
            ft_putchar(str[i]);
        } 
        i++;
    } 
    return (str);
}

int main(int ac , char **av)
{
    if (ac == 2)
         repeat_alpha(av[1]);
    write(1, "\n", 1);
return 0;
}