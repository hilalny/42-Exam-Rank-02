#include <unistd.h>
#include <stdlib.h>

void print(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **temp;
    while(str[i] && str[i] <= 32)
        i++;
    if(!(temp = (char **)malloc(sizeof(char) * 256)))
        return(NULL);
    while(str[i])
    {
        k = 0;
        if(!(temp[j] = (char *)malloc(sizeof(char) * 4096)))
            return(NULL);
        while(str[i] && str[i] > 32)
            temp[j][k++] = str[i++];
        while(str[i] && str[i] <= 32)
            i++;
        temp[j][k] = 0;
        j++;
    }
    temp[j] = 0;
    return(temp);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 1;
        char **tmp = ft_split(av[1]);
        while(tmp[i])
        {
            print(tmp[i]);
            if(tmp[i + 1])
                write(1, " ", 1);
            i++;
        }
        write(1, " ", 1);
        print(tmp[0]);
    }
    else if(ac > 2)
        print(av[1]);
    write(1, "\n", 1);
}