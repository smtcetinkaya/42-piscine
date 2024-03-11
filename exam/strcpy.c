char 	*strcpy(char *str, char *nisa)
{
	int	i;

	i = 0;
	while (nisa[i])
	{
		str[i] = nisa[i];
		i++;
	}
	return (str);
}