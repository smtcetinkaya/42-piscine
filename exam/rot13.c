#include <unistd.h>

int main(int ag,  char **argv)
{
	int		i;

	i = 0;
	if (ag == 2 && argv[1][i] != '\0')
	{
		while (argv[1][i])
		{
			if (('a' <= argv[1][i] && argv[1][i] <= 'm') || ('A' <= argv[1][i] && argv[1][i] <= 'M'))
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else if (('n' <= argv[1][i] && argv[1][i] <= 'z') || ('N' <= argv[1][i] && argv[1][i] <= 'Z'))
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, &"\n", 1);
}