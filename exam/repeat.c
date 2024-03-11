#include <unistd.h>
int main(int argc,  char **argv)
{
	int		i;
	int		a;

	i = 0;
	a = 1;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <='z')
				a += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				a += argv[1][i] - 'A';
			while (a)
			{
				write(1, &argv[1][i], 1);
				a--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}