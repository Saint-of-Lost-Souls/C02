#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i <= n)
    {
        dest[i] = src[i];  
        i++;
    }     
    dest[i] = '\0';
    return (dest);
}

int main ()
{
        char src[] = "The cake is a lie";
        char dest[sizeof(src)];
        unsigned int n;

        n = 5;
        ft_strncpy(dest, src, n);

        printf("Final copied string : %s\n", dest);

        return(0);
}
