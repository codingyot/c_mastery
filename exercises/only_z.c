#include <unistd.h>

void only_z()
{
    write(1, "z", 1);
        write(1, "\n", 1);
}
int main()
{
    only_z();
    return 0;
}