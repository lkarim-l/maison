#include <unistd.h>

int	ft_countdown()
{
	int	t = 57;
		while(t >= 48)
		{
			char	c = t;
			write(1, &c, 1);
			write(1, "\n" ,1);
			--t;
		}
		return 0;
}

int main()
{
	ft_countdown();
	return 0;
}
