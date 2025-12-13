void ft_putchar(char c);

void grid(int x,char a,char b,char c)
{
	int row = x;
	ft_putchar(a);
	row--;
	while(row > 1) {
		ft_putchar(b);
		row--;
	}
	if (row > 0){
		ft_putchar(c);
	}
	ft_putchar('\n');
}



void rush(int x, int y)
{
	char space;
	space= ' ';


	if ((y > 0) && (x > 0)) {
		grid(x, 'A', 'B', 'C');
		y--;
	}
	while((y > 1) && (x > 0)){
		grid(x, 'B',space, 'B');
		y--;
	}
	if ((y > 0) && (x > 0)) {
		grid(x, 'C', 'B', 'A');
		y--;
	}
}
