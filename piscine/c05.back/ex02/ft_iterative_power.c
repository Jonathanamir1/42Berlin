/*
Turn-in directory: ex02/
Files to turn in: ft_iterative_power.c
Allowed functions: None



• Create an iterative function that returns the result of raising a number to a given
power.
• If the power is less than 0, the function should return 0.
• Overflows do not need to be handled.
• By definition, 0 raised to the power of 0 should return 1.



• The function should be prototyped as follows:
int ft_iterative_power(int nb, int power);
*/

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1); 
    else
        while (power > 0)
        {
            result *= nb;
            power--;
        }
    return (result);
}
/*
#include <stdio.h>

int main()
{
    printf("%d \n", ft_iterative_power(0, 4));
    printf("%d \n", ft_iterative_power(14, 5));
    printf("%d \n", ft_iterative_power(3, 2));
    printf("%d \n", ft_iterative_power(13, 0));
    printf("%d \n", ft_iterative_power(2, 4));
    printf("%d \n", ft_iterative_power(1, 1));
    printf("%d \n", ft_iterative_power(-12, 2));
}
*/