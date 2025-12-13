/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:47:52 by yamir             #+#    #+#             */
/*   Updated: 2025/09/15 16:49:23 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main() {
    char *src = "this is a long message";
    char dest[strlen(src) - 5]; 
    ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}
*/
