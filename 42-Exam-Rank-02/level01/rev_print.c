#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i;
        
        i = 0;
        while(av[1][i])
            i++;
        i--;
        while(i >= 0)
        {
            write(1, &av[1][i], 1);
            i--;
        }
    }
}