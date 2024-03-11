#include <unistd.h>
#include <stdlib.h>

void putchar (char c)
{
	write(1, &c, 1);
}
void putnbr(int a)
{
	if(a == -2147483648)
	{
		putchar('-');
		putchar('2');
		putnbr(147483647);
	}
	else if (a < 0)
	{
		putchar('-');
		putnbr(a * -1);
	}
	else if (a > 9)
	{
		putnbr( a / 10);
		putnbr( a % 10);
	}
	else
		putchar(a + 48);
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
		{
			putnbr(atoi(argv[1]) + atoi(argv[3]));
		}
		if(argv[2][0] == '*')
		{
			putnbr(atoi((argv[1])) * (atoi(argv[3])));
		}
		if(argv[2][0] == '-')
		{
			putnbr(atoi(argv[1]) - atoi(argv[3]));
		}
		if(argv[2][0] == '/')
		{
			putnbr(atoi(argv[1]) / atoi(argv[3]));
		}
		if(argv[2][0] == '%')
		{
			putnbr(atoi(argv[1]) % atoi(argv[3]));
		}
	}
	write(1, &"\n", 1);
}
//batumento