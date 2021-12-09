#include <stdio.h>

char    ft_strlowcase( char *str)
{        
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                        *str += 32;                    
                }
                if (str[i] >= 'a' && str[i] <= 'z')
                {                        
                }
                str++;
        }
        return (str);
}
int main()
{
        char string_1[] = "THE CAKE IS A LIE";
        char string_2[] = "tHe CaKe Is a LiE";
        
        ft_strlowcase(string_2);

        printf("The converted string is: %s", string_2);
        return 0;
}