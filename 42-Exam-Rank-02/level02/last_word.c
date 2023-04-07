#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    
    i = 0;
    while(av[1][i])
        i++;
    while(av[1][i] <= 32)
        i--;
    while(av[1][i] > 32)
        i--;
    i++;
    while(av[1][i] > 32)
    {
        write(1, &av[1][i], 1);
        i++;
    }
}