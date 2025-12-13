/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:20:28 by yamir             #+#    #+#             */
/*   Updated: 2025/09/22 17:20:37 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*s;
	const char	*p;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		s = str;
		p = to_find;
		while (*p && *s == *p)
		{
			s++;
			p++;
		}
		if (!*p)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "ASDjneqouh30285isdfindmefvnaski-950isndfvvias";
	char to_find[] = "findme";
	printf("%s", ft_strstr(str, to_find));
}
*/