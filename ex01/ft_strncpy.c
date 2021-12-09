#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char converted;
    while (*src != '\0' && n--)
    {
        *dest = *src;
        dest++;
        src++;
     }          
    *dest = '\0';
    return (converted);
}

int main ()
{
        char src[] = "The cake is a lie";
        char dest[sizeof(src)];
        unsigned int n;
        char *converted;

        n = 3;
        converted = ft_strncpy(dest, src, n);

        printf("Final copied string : %s\n", &converted);

        return(0);
}
