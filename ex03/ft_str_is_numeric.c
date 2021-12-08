#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
        while (*str != '\0')
        {
                if (*str >= '0' && *str <= '9')
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
        char string[] = "1234567890";

        int result = ft_str_is_numeric(string);

        if(result == 1)
        {
                printf("string is numeric");
        }
        else{
                printf("string isn't numeric");
        }
        return 0;
}