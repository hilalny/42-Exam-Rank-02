#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str <= 32)
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++; 
    }
    return(result);
}

int is_prime(int n)
{
    int i = 2;
    while(i * i <= n)
    {
        if(n % 2 == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        if(num <= 0)
        {
            write(1, "0", 1);
            return(0);
        }
        int i = 2;
        int tpl = 0;
        while(i <= num)
        {
            if(is_prime(i))
                tpl += i;
                i++;
        }
        print(tpl);
    }
    write(1, "\n", 1);
}
