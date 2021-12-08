#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 'A' && *str <= 'Z')
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
        char string[] = "ILIKECOOKIES";

        int result = ft_str_is_uppercase(string);

        if(result == 1)
        {
                printf("string is uppercase");                   
        }
        else{
                printf("string isn't uppercase");                   
        }
        return 0;      
 }