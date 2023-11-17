#include <unistd.h>

void aff_a(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == 'a')
            write(1, "a", 1);
         i++;
    }
    write(1, "\n", 1);
   
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        aff_a(av[1]);
    }else
        write(1, "a\n", 2);
    return 0;
}