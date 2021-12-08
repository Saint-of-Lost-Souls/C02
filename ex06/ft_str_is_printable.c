#include <unistd.h>
#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 32 && *str <= 126)
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
        char string[] = "This won't won't \n work";

        int result = ft_str_is_printable(string);

        if(result == 1)
        {
                printf("This worked");
        }
        else{
                printf("This didn't work");
        }
        return 0;
}