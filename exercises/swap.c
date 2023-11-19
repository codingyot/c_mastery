#include <stdio.h>

void	ft_swap(int *a, int *b)
{
   int tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}

int main()
{
    int x = 5000;
    int y = 4000;

    ft_swap(&x, &y);

    printf("x =%d, y =%d",x, y);

    return 0;
}
