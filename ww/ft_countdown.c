#include <unistd.h>

int	ft_countdown()
{
	int	t = 57;
		while(t >= 48)
		{
			char	c = t;
			write(1, &c, 1);
			--t;
		}
		return 0;
}

int main()
{
	ftcountdown();
	return 0;
}
