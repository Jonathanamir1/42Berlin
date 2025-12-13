/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:42:28 by yamir             #+#    #+#             */
/*   Updated: 2025/09/24 19:42:31 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	final_int;

	i = 0;
	is_negative = 1;
	final_int = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || 
		str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_int = final_int * 10 + (str[i] - 48);
		i++;
	}
	return (final_int * is_negative);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("         	\n---+----+--+1234ab567"));
	return (0);
}
*/
