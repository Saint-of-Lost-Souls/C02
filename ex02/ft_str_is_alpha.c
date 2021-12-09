#include <stdio.h>

int     ft_str_is_alpha(char *str)
{       
        int i;

        i = 0;        
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
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
        char string_1[] = "tHeCaKeIsAlIe";
        char string_2[] = "1234567890";

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
        