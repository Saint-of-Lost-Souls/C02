#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        memset(dest, '\0', sizeof(src));
        strcpy(dest, src, n);
        return (dest);
}


int main ()
{
        char src[] = "The cake is a lie";
        char dest[sizeof(src)];
        unsigned int n;
        n = 10;
        ft_strncpy(dest, src, n);

        printf("Final copied string : %s\n", dest);

        return(0);
}
