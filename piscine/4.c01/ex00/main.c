#include <stdio.h>

void ft_ft(int *nbr);

int main() {
	int c;
	int *nbr;
	c = 1;
	nbr = &c;

	ft_ft(nbr);
	printf("%d", c);

	return (0);

}
