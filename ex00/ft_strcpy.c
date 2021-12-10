#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main ()
{
        char src[15] = "i like cookies";
        char dest[15];
        
        ft_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);

        return(0);
}
