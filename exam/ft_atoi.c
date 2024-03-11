int ft_atoi (const char *str)
{
	int		i;
	int		s;
	int		num;

	i = 0;
	s = 1;
	num = 0;;
	while ((str[i] >= 9 && 13 >= str[i]) || str[i] == ' ')
		i++;	
	if (str[i] == '-')
	{		
		s = s * - 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <='9' && str[i] != '\0')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	return (num * s);

}
