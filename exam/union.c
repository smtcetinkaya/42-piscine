#include <unistd.h>

int main(int ag, char **argv)
{
	int index[255] = {0};
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	if(ag == 3)
	{
		while(argv[1][i])
		{
			c = argv[1][i];
			if (index[c] == 0)
			{
				write(1, &c, 1);
				index[c] = 1;
			}
			i++;
		}
		while(argv[2][j])
		{
			c = argv[2][j];
			if(index[c] == 0)
			{
				write(1, &c, 1);
				index[c] = 1;
			}
			j++;
		}
	}
	write(1, &"\n", 1);
}