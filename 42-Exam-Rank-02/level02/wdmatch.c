#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int c = 0;
    int len = 0;
    if(ac == 3)
    {
        while(av[1][len])
            len++;
        while(av[2][j] && av[1][i])
        {
            if(av[1][i] == av[2][j])
            {
                i++;
                c++;
            } 
            j++;
        }
        i = 0;
        if(len == c)
        {
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}