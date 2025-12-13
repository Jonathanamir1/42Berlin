#include <unistd.h>

void print(char num)
{
	write(1, &num, 1);
}
