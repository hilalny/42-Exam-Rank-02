#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int s1 = atoi(av[1]);
        int s2 = atoi(av[2]);
        if(s1 <= 0 || s2 <= 0)
        {
            printf("\n");
            return(0);
        }
        int temp;
        while(s2)
        {
            temp = s1 % s2;
            s1 = s2;
            s2 = temp;
        }
        printf("%d", s1);
    }
    printf("\n");
    return(0);
}
