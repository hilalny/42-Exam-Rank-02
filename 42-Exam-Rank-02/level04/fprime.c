#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 2;
        int num = atoi(av[1]);
        if(num == 1)
            printf("1");
        while(num > 1)
        {
            while(num % i == 0)
            {
                printf("%d", i);
                num /= i;
                if(num > 1)
                    printf("*");
            }
            i++;
        }
    }
    printf("\n");
    return(0);
}