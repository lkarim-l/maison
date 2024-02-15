#include <stdio.h>

	// [chantdoiseau]
void ft_ft(int *nbr)
{
	//[chantdoiseau] = 42
	*nbr = 42;
}

int main()
{

	// [chantdoiseau] = 65 == x
	int x = 65;
	// x
	printf("%d\n", x);
	// [chantdoiseau]
	ft_ft(&x);
	// x
	printf("%d\n", x);


	int y;
	
	y = 17890;
	printf("%d\n", y);
	
	ft_ft(&y);
	printf("%d\n", y);

	return 0;
}
