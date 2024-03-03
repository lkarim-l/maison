#include <stdio.h>

void ft_ultimate_ft(int **nbr)

{
	**nbr = 42;
}

int main()
{
	int x = 43;
	int *y;
	int **z;
	int ***a;
	printf("%d\n", x);
	
	y = &x;
	z = &y;
	a = &z;

	***a = 42;
		
	printf("%d\n", x);	
	printf("%d\n", *y);
	printf("%d\n", **z);
	printf("%d\n", ***a);
	
	printf("%d\n", x);
	return 0;
}
