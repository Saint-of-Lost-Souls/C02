#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    while (*src != '\0' && n--)
    {
        *dest = *src;
        dest++;
        src++;
     }          
    *dest = '\0';
    return (0);
}

int main ()
{
        char src[] = "The cake is a lie";
        char dest[sizeof(src)];
        unsigned int n;
        n = 3;
        ft_strncpy(dest, src, n);

        printf("Final copied string : %s\n", dest);

        return(0);
}
