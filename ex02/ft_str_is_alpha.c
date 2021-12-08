#include <stdio.h>

int     ft_str_is_alpha(char *str)

{
        while (*str != '\0')
        {
                if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str >= 'A')
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
        char string_1[] = "tHeCaKeIsAlIe";

        int result = ft_str_is_alpha(string_1);

        if(result == 1)
        {
                printf("string is alpha");                   
        }
        else{
                printf("string isn't alpha");                   
        }
        return 0;      
 }
        