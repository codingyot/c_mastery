#include <unistd.h>

void count()
{
    write(1, "9876543210", 10);
    write(1, "\n", 1);
}
int main(int ac , char **av)
{
    if (ac == 1)
        count(av[1]);
    return 0;
}