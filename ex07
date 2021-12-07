#include <unistd.h>
#include <stdio.h>

char    ft_strupcase(char *str)
{
        char whitespace;

        whitespace = ' ';
        while (*str != '\0')
        {
                if (*str >= 'a' && *str <= 'z')
                {
                        *str -= 32;
                        //write(1, str, 1);
                }
                if (*str >= 'A' && *str <= 'Z' || *str == whitespace)
                {
                        //write(1, str, 1);
                }
                str++;
        }
        return *str;
}
int main()
{
        char string_1[] = "thecakeisalie";
        char string_2[] = "ThE cAkE iS a LiE";
        char converted;

        converted = ft_strupcase(string_2);


        write(1, &string_2, sizeof(string_2));
        return 0;
}
