void	ft_putchar(char c);

void	ft_rush(int x, int y)
{

	int i;
	int j;
	
	i = 0;
	j = 0;
	
	if(x > 1 && y > 1)
	{
		while(j < y)
		{
			i = 0;
			while(i < x)
			{
				if(i == 0 || i == x - 1)
				{	
					if (j == y - 1 && y > 1)
					{
						ft_putchar('C');
					}
					else if(j  == 0)
					{
						ft_putchar('A');
					}
					else 
					{	
						ft_putchar('B');
					}
				}			
				else if(j == 0 || j == y - 1)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
				i++;
			}	
			ft_putchar('\n');
			j++;
		}
	}
}
