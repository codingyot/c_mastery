#include <stdio.h>
#include <stdbool.h>

#define l 26
#define case 32

bool is_alpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void count_alpha(char *str) 
{
    int i = 0;
    int in = 0;
    int x[l] = {0};
    char y[l] = {'\0'};
    char all;

    while (*str) 
    {
        all = *str++;
        if (is_alpha(all)) 
        {
            if (x[all - (is_alpha(all) && all >= 'a' ? 'a' : 'A')] == 0) 
                y[in++] = all;
            x[all - (is_alpha(all) && all >= 'a' ? 'a' : 'A')]++;
        }
    }
    while (in > i) 
    {
        printf("%d%c%s", x[y[i] - (y[i] >= 'a' ? 'a' : 'A')], y[i], (in - 1 > i ? ", " : ""));
            i++;
    }
    printf("\n");
}

int main(int ac, char **av) 
{
    if (ac == 2) 
    {
        count_alpha(av[1]);
    } else 
    {
        printf("\n");
    }
    return 0;
}
