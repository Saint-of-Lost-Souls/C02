#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 'a' && *str <= 'z')
                {
                }
                else
                {
                        return (0);
                }
        str++;
        }
        return (1);
}
int main()
 {
        char string[] = "thecakeisalie";

        int result = ft_str_is_lowercase(string);

        if(result == 1)
        {
                printf("string is lowercase");                   
        }
        else{
                printf("string isn't lowercase");                   
        }
        return 0;      
 }