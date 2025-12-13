int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else if (power > 1)
        return nb * (ft_recursive_power(nb, power -1));
    else return (nb * nb);
}

#include <stdio.h>

int main()
{
    printf("%d \n", ft_recursive_power(0, 4));
    printf("%d \n", ft_recursive_power(14, 5));
    printf("%d \n", ft_recursive_power(3, 2));
    printf("%d \n", ft_recursive_power(13, 0));
    printf("%d \n", ft_recursive_power(2, 4));
    printf("%d \n", ft_recursive_power(1, 1));
    printf("%d \n", ft_recursive_power(-12, 2));
}