#include <unistd.h>

void  ft_rev_print(char *str)
{
    int i;
    int r;

    i = 0;
    while(str[i] != '\0')
    i++;
    r = i -1;
    while(r >= 0)
    {
        write(1, &str[r], 1);
        r--;
    }
}
int main()
{
    ft_rev_print("!noos uoy eeS .spets txen ssecorp eht ot ssecca detnarg eb ton lliw uoy ,uoy htiw stnemucod esoht lla evah ton od uoy fI .noitacifitnedi fo eceip lanigiro na tneserp ot evah osla uoy ,luferac eB .enohptrams a morf ti wohs ro ti tnirp rehtie nac uoY .woleb detacidni etad eht no edoC RQ siht htiw emoC .ibahD ubA 24 htiw tnemtnioppa na evah won uoY !snoitalutargnoC");   
}