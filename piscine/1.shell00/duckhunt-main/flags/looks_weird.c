/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looks_weird.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feberman <feberman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:18:42 by feberman          #+#    #+#             */
/*   Updated: 2025/11/14 15:25:22 by feberman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <strings.h>

int main(void)
{ 
	int	i;
	const char* text;
	text = "hello world";
	i = 1;
	
	while (i < strlen(text))	
	{
    	printf("%.*s\n", i, text) ;
		i++;
	}
	while (i >= 1)
	{
	    printf("%.*s\n", i, text);
		i--;
	} 
	return 0;
}
