#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_rev_print(char *str)
{
    int x = ft_strlen(str) - 1;

    while (x >= 0)
    {
        write(1, &str[x], 1);
        x--;
    }
    
    return str; // Return the original string
}

int main()
{
    char *original = "nalla si ssecus";
    char *reversed = ft_rev_print(original);

    write(1, "\n", 1); // Print a newline character
    return 0;
}
