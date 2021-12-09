#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
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
        char string[] = "ILIKECOOKIES";
        char string_1[] = "ilikecookies";

        int result = ft_str_is_uppercase(string_1);

        if(result == 1)
        {
                printf("string is uppercase");                   
        }
        else{
                printf("string isn't uppercase");                   
        }
        return 0;      
 }