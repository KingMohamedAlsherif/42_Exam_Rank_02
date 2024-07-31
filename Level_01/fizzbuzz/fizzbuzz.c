#include <unistd.h>

void    write_nbr(int   nbr)
{
    char    s[10] = "0123456789";
    if (nbr > 9)
        write_nbr(nbr / 10);
    write(1, &s[nbr % 10], 1);
}

int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz" , 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            write_nbr(i);

        i++;
        write(1, "\n", 1);
    }

}