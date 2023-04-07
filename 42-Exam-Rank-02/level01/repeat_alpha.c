#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i;
        int count;

        i = 0;
        count = 1;
        while(av[1][i])
        {
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 64;
            else if(av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96;
            while(count)
            {
                write(1, &av[1][i], 1);
                count--;
            }
            count = 1;
            i++;
       }
    }
}