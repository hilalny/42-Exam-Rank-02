#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i] <= 32)
            i++;
        while(av[1][i])
        {
            if(av[1][i] <= 32)
            { 
                if(av[1][i + 1] > 32 && av[1][i + 1])
                    write(1, " ", 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}