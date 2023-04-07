#include <stdlib.h>

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