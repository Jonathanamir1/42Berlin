/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:32:52 by yamir             #+#    #+#             */
/*   Updated: 2025/09/22 15:32:54 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] && !s2[i])
		return (1);
	else if (!s1[i] && s2[i])
		return (-1);
	return (0);
}
/*
#include <stdio.h>

int main(){
	char s1[] = "I am a Much Shorter String ";
	char s2[] = "I am a Much Shorter String";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
*/
