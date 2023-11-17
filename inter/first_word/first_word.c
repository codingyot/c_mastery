#include <unistd.h>

void first_word(char *str)
{
    int i = 0;

    // Skip leading tabs and spaces
    while (str[i] == '\t' || str[i] == ' ')
    {
        i++;
    }
    // Print characters until a space or tab is encountered
    while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
    {
        write(1, &str[i], 1); 
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        first_word(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}
