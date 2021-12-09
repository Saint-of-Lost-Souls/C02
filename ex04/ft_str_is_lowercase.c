#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                }
                else
                {
                        return (0);
                }
        i++;
        }
        return (1);
}
int main()
 {
        char string[] = "thecakeisalie";
        char string_1[] = "THECAKEISALIE";

        int result = ft_str_is_lowercase(string_1);

        if(result == 1)
        {
                printf("string is lowercase");                   
        }
        else{
                printf("string isn't lowercase");                   
        }
        return 0;      
 }