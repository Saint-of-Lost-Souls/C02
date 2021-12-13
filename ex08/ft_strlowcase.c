#include <stdio.h>

char *ft_strlowcase(char *str)
{        
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] += 32;                    
                }                
                i++;
        }
        return (str);
}
int main()
{
        char string_2[] = "tHe CaKe Is a LiE";
        
        ft_strlowcase(string_2);

        printf("The converted string is: %s", string_2);
        return 0;
}