#include <unistd.h>

int checker(char *str, char c, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
} 

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i;
        int j;

        i = 0;
        while(av[1][i])
        {
            if(!(checker(av[1], av[1][i], i)))
                write(1, &av[1][i], 1);
            i++;
        }
        j = 0;
        while(av[2][j])
        {
            if(!(checker(av[1], av[2][j], j)) && !(checker(av[2],av[2][j], j)))
                write(1, &av[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return(0);
}