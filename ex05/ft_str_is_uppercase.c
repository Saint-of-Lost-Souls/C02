int     ft_str_is_uppercase(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 'A' && *str <= 'Z')
                {
                        printf("Fuck");
                }
                else
                {
                        printf("Well that sucked");
                        return (0);
                }
                str++;
        }
        return (1);
}