/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:39:19 by yamir             #+#    #+#             */
/*   Updated: 2025/12/13 16:03:26 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int	i;
	int	char_printed;

	if (!s)
		return (0);
	i = 0;
	char_printed = 0;
	while (s[i])
	{
		if (s[i] == '%')
			;
		else
		{
			write(1, &s[1], 1);
			char_printed += 1;
		}
		i++;
	}
	return (char_printed);
}
