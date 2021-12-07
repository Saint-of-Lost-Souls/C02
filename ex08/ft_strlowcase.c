#include <unistd.h>
#include <stdio.h>

char    ft_strlowcase( char *str)
{

        char whitespace;

        whitespace = ' ';
        while (*str != '\0')
        {
                if (*str >= 'A' && *str <= 'Z')
                {
                        *str += 32;
                        //write(1, str, 1);
                }
                if (*str >= 'a' && *str <= 'z' || *str == whitespace)
                {
                        //write(1, str, 1);
                }
                str++;
        }
        return *str;
}




int main()
{
        char string_1[] = "THE CAKE IS A LIE";
        char string_2[] = "tHe CaKe Is LiE";
        char converted;

        converted = ft_strlowcase(string_2);
        printf("The converted string is: %s", string_2);
        return 0;
}