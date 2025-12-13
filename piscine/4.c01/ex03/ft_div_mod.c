/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:51:24 by yamir             #+#    #+#             */
/*   Updated: 2025/09/10 17:17:43 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void){
	int a = 17;
	int b = 5;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d with reminder of %d", div, mod);
}
*/
