#include <unistd.h>

int main(int    ac, char**  av)
{
    int i = 0;
    int j;
    int seen[256] = {0};

    if (ac == 3)
    {
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if(!seen[av[1][i]])
                    {
                        write(1, &av[1][i], 1);
                        seen[av[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}