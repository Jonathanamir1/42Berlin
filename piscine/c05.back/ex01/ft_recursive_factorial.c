int ft_recursive_factorial(int nb)
{
    if (nb <= 0)
        return (0);
    else if (nb >= 2)
        return nb * (ft_recursive_factorial(nb - 1));
    else 
        return nb * nb;
}
/*
#include <stdio.h>

int main()
{
    printf("%d \n", ft_recursive_factorial(0));
    printf("%d \n", ft_recursive_factorial(14));
    printf("%d \n", ft_recursive_factorial(3));
    printf("%d \n", ft_recursive_factorial(13));
    printf("%d \n", ft_recursive_factorial(2));
    printf("%d \n", ft_recursive_factorial(1));
}
*/