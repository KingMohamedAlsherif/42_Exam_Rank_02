// int	ft_atoi(const char *str)
// {
//     int res = 0;
//     int si = 1;
//     while (*str == ' ' || (*str >= 9 && *str <= 13))
//         str++;
//     if (*str == '-')
//         si = -1;
//     if (*str == '+' || *str == '-')
//         str++;
//     while(*str >= '0' && *str <= '9')
//         {
//             res = res * 10 + *str - '0';
//             str++;
//         }
//     return(si * res);
// }

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}