int max(int *tab, unsigned int len)
{
    int i;
    int tmp;
    i = 0;
    tmp = 0;
    while(tab[i])
    {
        if(tab[i] > tmp)
        {
            tmp = tab[i];
        }
        i++;
    }
    return(tmp);
}

