#include <unistd.h>

void moff()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
        write(1, "\n", 1);
}
int main()
{
    moff();
    return 0;
}