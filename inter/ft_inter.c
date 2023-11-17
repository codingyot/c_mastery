#include <unistd.h>

int check(char * str, char s, int n)
{
    int i;

    i = 0;
    while(n > i)
    {
        if (str[i] == s)
            return 0;
        i++;
    }
    return (1);
}
void inter(char *str, char *str1)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        while(str[j] != '\0')
        {
            if (str[i] == str[j])
            {
                if (check(str, str[i], i) == 1)
                {
                    write(1, &str[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
return 0;
}