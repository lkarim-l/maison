#include <unistd.h>


void ft_putchar(int c)
{
	char n;
	n = c + 48;
	write (1, &n, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < 7)
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();

}

