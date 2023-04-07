#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    int j;
    int len;
    char *strcpy;

    i = 0;
    len = 0;
    j = 0;
    while(src[len])
        len++;
    strcpy = malloc(sizeof(char) * (len + 1));
    if(!strcpy)
        return(NULL);
    while(src[i])
    {
        strcpy[j] = src[i];
        i++;
        j++;
    }
    strcpy[i] = '\0';
    return(strcpy);
}
