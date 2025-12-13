/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:08:03 by yamir             #+#    #+#             */
/*   Updated: 2025/09/15 10:46:16 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(char letter)
{
	return ((letter >= 'a' && letter <= 'z')
		|| (letter >= 'A' && letter <= 'Z')
		|| (letter >= '0' && letter <= '9'));
}

int	which_letter(char letter)
{
	return (letter >= 'a' && letter <= 'z');
}

int	check_first_letter(char *str)
{
	if (str[0] == '\0')
		return (0);
	if (which_letter(str[0]) == 1)
		str[0] = str[0] - 32;
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (check_first_letter(str) == 0)
		return (str);
	i = 1;
	while (str[i] != '\0')
	{
		if (!is_letter(str[i - 1]))
		{
			if (which_letter(str[i]) == 1)
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s", str);
	return(0);
}
*/
