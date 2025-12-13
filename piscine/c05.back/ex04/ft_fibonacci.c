/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:14:20 by yamir             #+#    #+#             */
/*   Updated: 2025/09/25 13:15:37 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (index);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index - 1)); 
}
/*
#include <stdio.h>

int main()
{
    printf("%d", ft_fibonacci(5));
}
*/
