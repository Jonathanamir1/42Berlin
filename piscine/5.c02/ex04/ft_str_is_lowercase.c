/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:47:26 by yamir             #+#    #+#             */
/*   Updated: 2025/09/10 13:51:55 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
    char str[] = "helloworld"; // Contains a space
    //char str[] = "Hello123";   // Contains numbers
    //char str[] = "";           // Empty string
        printf("%d", ft_str_is_lowercase(str));
    return 0;
}
*/
