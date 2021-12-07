int     ft_str_is_printable(char *str)
{
        while (*str != '\0')
        {
                if (*str >= 32 && *str <= 126)
                {
                        write(1, str, 1);
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
