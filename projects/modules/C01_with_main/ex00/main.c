#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int a;
	int *nbr;

	a = 21;
	nbr = &a;
	printf("%d\n", *nbr);
	ft_ft(nbr);
	printf("%d\n", *nbr);
	return(0);
}
