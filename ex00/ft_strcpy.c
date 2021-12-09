#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (dest);
}
int main ()
{
        char src[] = "i like cookies";
        char dest[sizeof(src)];
        
        ft_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);

        return(0);
}
