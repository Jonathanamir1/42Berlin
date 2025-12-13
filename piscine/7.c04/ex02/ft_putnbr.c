/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:23:31 by yamir             #+#    #+#             */
/*   Updated: 2025/09/24 17:50:35 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}
/*
#include <stdio.h>

int main()
{
	ft_putnbr(0);
	ft_putnbr(10);
	ft_putnbr(-10);
	ft_putnbr(-15);
	ft_putnbr(-15);
	ft_putnbr(-99);
	ft_putnbr(100);
	ft_putnbr(214832647);
	ft_putnbr(-217483648);
}
*/
