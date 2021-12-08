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
        ft_str_is_numeric("1234567890");
        return 0;
}