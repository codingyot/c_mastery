#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *s)
{
    int i;
    int a;
    char swap;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    a = i - 1;
    i = 0;
   while (a > i)
{
    swap = s[i];
    s[i] = s[a];
    s[a] = swap;
    i++;
    a--;
}
    return (s);
}

int main()
{
    char x[] = " kcab si nallA";
    printf("%s", ft_strrev(x));
}