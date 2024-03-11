#include <unistd.h>

void rev_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i = i -1;
	while ( 0 <= i)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, &"\n", 1);
}
