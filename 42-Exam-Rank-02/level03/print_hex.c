#include <unistd.h>

void   print(int num)
{
    if(num > 15)
        print(num / 16);
    write(1, &"0123456789abcdef"[num % 16], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
        result = (result * 10) + str[i++] - '0';
    return(result);   
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int s1 = ft_atoi(av[1]);
        print(s1);
    }
    write(1,"\n" ,1);
}