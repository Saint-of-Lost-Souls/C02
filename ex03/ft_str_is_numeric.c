#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= '0' && str[i] <= '9')
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
        char string[] = "1234567890";
        char string_1[] = "i like cookies";

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