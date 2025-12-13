/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:30:09 by yamir             #+#    #+#             */
/*   Updated: 2025/09/22 16:30:10 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	return (str_len);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "hello";
	printf("%d \n", ft_strlen(str));
	printf("%lu", strlen(str));
}
*/
