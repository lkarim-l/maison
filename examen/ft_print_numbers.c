#include <unistd.h>

void	ft_print_numbers(void);

int	main()
{
	char c = 48;
	while(c<='9')
	{
		write(1, &c, 1);
	c++;
	}
}