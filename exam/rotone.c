#include <unistd.h>

int main(int ag, char ** argv)
{
	int		i;

	i = 0;
	if (ag == 2)
	{
		while(argv[1][i])
		{
			if(('a' <= argv[1][i] && argv[1][i] <= 'y') || ('A' <= argv[1][i] && argv[1][i] <= 'Y'))
			{
				argv[1][i] += 1;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				argv[1][i] -= 25;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, &"\n", 1);
}