#include <stdlib.h>
#include <stdio.h>

int PandN(int y)
{
    if (y < 0)
        return (-y);
    return (y);
}
int     *ft_range(int start, int end)
{
    int i;
    int a;
    int *w;
    int *x;

    a = PandN(end - start) + 1;
    w = (int *)malloc(sizeof(int) * a);
    if (!w)
        return (0);
    if (a == 1)
        x[0] = start;
    i = 0;
    x = w;
    if (start < end)
    {
        while(a > i)
        {
            x[i] = start + i;
            i++;
        }
    }
    else if (start > end)
    {
        while(a > i)
        {
            x[i] = start - i;
            i++;
        }
    }
    return (x);
}
int main()
{
    int i = 0;
    int start = -100;
    int end = 2;
    int *x;

    int a = PandN(end - start) + 1;
    x = ft_range(start, end);
    while (a > i)
    {
        printf("%i, ", x[i]);
        i++;
    }
    free(x);
}