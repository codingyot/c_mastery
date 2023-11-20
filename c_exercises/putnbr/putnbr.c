#include <unistd.h>
#include <stdio.h>

void put_out(char c)
{
    write(1, &c, 1);
}

void putnbr(int nbr)
{
    int i;

    i = 0;
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if (nbr > 0)
    {
        putnbr(nbr / 10);
        put_out('0' + nbr % 10);
    }
}
int main()
{
    int i = 2147483647;
    putnbr(i);
}