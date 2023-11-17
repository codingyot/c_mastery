#include <unistd.h>

int first(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] =='\t')
        i++;
    while(str[i] != '\0'  && str[i] != ' ' && str[i] !='\t')
        {
            write(1, &str[i], 1);
            i++;
        }
    write(1, "\n", 1);
}
int main(int ac , char **av)
{
    if (ac == 2)
    {
        first(av[1]);
    }else
        write(1, "\n", 1);
    return 0;
}
