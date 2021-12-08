#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *start; 

    start = dest;
    while (*src != '\0' && *dest < n)
    {
        *dest = *src;
        dest++;
        src++;
     }          
    *dest = '\0'; // add '\0' at the end
    return (start);
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
