/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:39:42 by yamir             #+#    #+#             */
/*   Updated: 2025/09/09 09:12:36 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		remainder;
	int		num;

	num = *a / *b;
	remainder = *a % *b;
	*a = num;
	*b = remainder;
}
/*
#include <stdio.h>
int main(void){
	int a = 7;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}
*/
