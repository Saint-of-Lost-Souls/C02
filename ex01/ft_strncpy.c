#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *start; 

    start = dest;
    while (*src != '\0' && n--)
    {
        *dest = *src;
        dest++;
        src++;
     }          
    *dest = '\0';
    return (start);
}

int main ()
{
        char src[] = "The cake is a lie";
        char dest[sizeof(src)];
        unsigned int n;
        n = 8;
        ft_strncpy(dest, src, n);

        printf("Final copied string : %s\n", dest);

        return(0);
}
