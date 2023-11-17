#include <unistd.h>

// void	ft_print_numbers(void)
// {
//     char a;

//     a = '0';
//     while(a <= '9')
//     {
//         write(1, &a, 1);
//         a++;
//     }
// }
void	ft_print_numbers(void)
{
        write(1, "0123456789", 10);
}
int main()
{
    ft_print_numbers();
}
