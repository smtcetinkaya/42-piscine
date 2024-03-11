char *strrev(char *str)
{
	int		len;
	int		i;
	char	c;

	i = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len - 1];
		str[len - 1] = c;
		i++;
		len --;
	}
	return (str);
}