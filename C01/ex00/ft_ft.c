#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
	
}

int main()
{
	int x = 65;
	printf("%d\n", x);
	ft_ft(&x);
	printf("%d\n", x);
	return 0;
}
