#include <stdio.h>

char    ft_strupcase(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 'a' && *str <= 'z')
                {
                        *str -= 32;
                        //write(1, str, 1);
                }
                if (*str >= 'A' && *str <= 'Z')
                {
                        //write(1, str, 1);
                }
                str++;
        }
        return (*str);
}
int main()
{
        char string_1[] = "thecakeisalie";
        char string_2[] = "ThE cAkE iS a LiE";
        char converted;

        converted = ft_strupcase(string_2);

        printf("The converted string is: %s", string_2);

        return 0;
}
