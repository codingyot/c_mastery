#include <unistd.h>
#include <stdio.h>

int checker(char *str, char o, int y)
{
    int i;

    i = 0;
    while(y > i)
        {  
            if (str[i] == o)
                return (0);
            i++;
        }
    return (1);
}

void ft_union(char *st, char *sc)
{
    int i;
    int len;

    i = 0;
    while (st[i] != '\0')
    {
        if (checker(st, st[i], i) == 1)
            write(1, &st[i], 1);
        i++;
    }
    len = i;
    i = 0; 
    while (sc[i] != '\0')
    {
        if (checker(sc, sc[i], i) == 1)
        {
            if (checker(st, sc[i], len) == 1)
                write(1, &sc[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1,"\n", 1);
    return (0);
}