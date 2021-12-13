#include <stdio.h>

char    *ft_strupcase(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                        str[i] -= 32;        
                }                
                str++;
        }
        return (str);
}
int main()
{

        char string_2[] = "ThE cAkE iS a LiE";
        
        ft_strupcase(string_2);

        printf("The converted string is: %s", string_2);

        return 0;
}
