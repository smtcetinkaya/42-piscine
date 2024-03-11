#include <stdlib.h>

char *strdup(char *s)
{
	int		i;
	char	*k;

	i = 0;
	while(s[i])
		i++;
	k = malloc(i + 1);
	if(!k)
	{
		while(k[i])
		{
				k[i] = s[i];
				i++;
		}
		k[i] = '\0';
	}
	return (k);
}