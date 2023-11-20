#include <unistd.h>
#include <stdio.h>

void put(char c)
{
    write(1, &c, 1);
}

char *repeat_alpha(char *str)
{
    int i;
    int x;

    i = 0;
    while(str[i] != '\0')
    {
        x = 0;
        if (str[i] >= 'a' && str[i] <= 'z')
        {   
            x = str[i] - 97;
             while(x > i)
            {
                put(str[i]);
                x--;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        { 
            x = str[i] - 65;
             while(x > i)
            {
                put(str[i]);
                x--;
            }
        }
        else 
            put(str[i]);
        i++;
    }
    return (str);
}
int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
}