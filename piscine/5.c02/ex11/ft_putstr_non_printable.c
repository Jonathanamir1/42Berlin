/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:54:10 by yamir             #+#    #+#             */
/*   Updated: 2025/09/15 17:31:49 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hex(char c)
{
	char	*hex;
	char	buff[2];

	hex = "0123456789abcdef";
	buff[0] = hex[c / 16];
	buff[1] = hex[c % 16];
	write(1, buff, 2);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			put_hex(str[i]);
		}
		i++;
	}
}
#include <stdio.h>

int main()
{
	char str[] = "Hello\nHow are you?";
	ft_putstr_non_printable(str);
	return (0);
}

