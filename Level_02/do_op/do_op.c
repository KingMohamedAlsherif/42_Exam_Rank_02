#include <stdio.h>
#include <stdlib.h>

int main(int    ac, char**  av)
{
    int i;
    int res;
    if (ac == 4)
    {
            if (av[2][i] == '*')
                res = atoi(av[1]) * atoi(av[3]);
            else if(av[2][i] == '+')
                res = atoi(av[1]) + atoi(av[3]);
            else if(av[2][i] == '-')
                res = atoi(av[1]) - atoi(av[3]);
            else if(av[2][i] == '/')
                res = atoi(av[1]) / atoi(av[3]);
            printf("%d", res);
    }
    printf("\n");
}

