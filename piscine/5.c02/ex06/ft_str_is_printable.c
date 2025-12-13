/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:40:41 by yamir             #+#    #+#             */
/*   Updated: 2025/09/10 16:44:54 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i; 

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	  char str[] = "asni394qj2n4";
	  printf("%d", ft_str_is_printable(str));
	  return(0);
}
*/