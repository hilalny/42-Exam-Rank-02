#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        int s1;
        int s2;
        int result;

        s1 = atoi(av[1]);
        s2 = atoi(av[3]);

        if(av[2][0] == '+')
            result = s1 + s2;
        else if(av[2][0] == '-')
            result = s1 - s2;
        else if(av[2][0] == '*')
            result = s1 * s2;
        else if(av[2][0] == '%')
            result = s1 % s2;
        else if(av[2][0] == '/')
            result = s1 / s2;
        printf("%d", result);
    }
    printf("\n");
}
