#include <unistd.h>
int main(int ag, char **argv)
{
	int		i;

	i = 0;
	if (ag == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
}