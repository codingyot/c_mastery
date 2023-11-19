#include <unistd.h>

void putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
}
int clen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main(int ac, char **av)
{
    int i;
    int j;
    int wdmatch;

    i = 0;
    j = 0;
    if (ac == 3)
    {
    while (av[1][i] != '\0')
    {
        while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                {
                    wdmatch++;
                    break;
                }
                j++;
            }

        i++;
    }
    if (wdmatch == clen(av[1]))
         putstr(av[1]);
    }
    write(1, "\n", 1);
    return 0;  
}