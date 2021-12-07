#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
        memset(dest, '\0', sizeof(src));
        strcpy(dest, src);
        return dest;
}


int main ()
{
        char src[] = "Some bullshit string";
        char dest[sizeof(src)];

        ft_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);

        return(0);
}
