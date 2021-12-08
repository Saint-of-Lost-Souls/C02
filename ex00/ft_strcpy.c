#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    char *start; 

    start = dest;
    while(*src != '\0')
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
        char src[] = "Some bullshit string";
        char dest[sizeof(src)];
        
        ft_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);

        return(0);
}
