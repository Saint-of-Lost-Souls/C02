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
        ft_str_is_printable("This won't \n work");
        return 0;

}