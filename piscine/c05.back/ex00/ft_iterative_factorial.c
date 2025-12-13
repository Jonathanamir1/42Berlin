int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    if (nb <= 0)
        return (0);
    while (nb != 1)
    {
        i *= nb;
        nb--;
    }
    return (i);
}

#include <stdio.h>

int main()
{
    printf("%d \n", ft_iterative_factorial(0));
    printf("%d \n", ft_iterative_factorial(14));
    printf("%d \n", ft_iterative_factorial(3));
    printf("%d \n", ft_iterative_factorial(13));
    printf("%d \n", ft_iterative_factorial(2));
    printf("%d \n", ft_iterative_factorial(1));
}
