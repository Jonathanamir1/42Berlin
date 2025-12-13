/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:13:19 by yamir             #+#    #+#             */
/*   Updated: 2025/09/15 14:39:11 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[20]; // Buffer for destination string
    char *src;
    unsigned int size;
    unsigned int ret;

    // Test 1: Normal case, copy partial string
    src = "Hello, World!";
    size = 6;
    ret = ft_strlcpy(dest, src, size);
    printf("Test 1: src = '%s', size = %u\n", src, size);
    return (0);
}
*/
