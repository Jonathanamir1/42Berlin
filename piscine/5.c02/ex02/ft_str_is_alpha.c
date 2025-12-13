/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:46:20 by yamir             #+#    #+#             */
/*   Updated: 2025/09/10 15:04:59 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    //char str[] = "HelloWorld";
    char str[] = "Hello World"; // Contains a space
    //char str[] = "Hello123";   // Contains numbers
    //char str[] = "";           // Empty string
	printf("%d", ft_str_is_alpha(str));
    return 0;
}
*/
